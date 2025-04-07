module.exports = grammar({
  name: "npf",
  externals: ($) => [$._content_line, $._comment_line],
  rules: {
    document: ($) => 
      repeat1(choice($.section, $.comment_block)),
    section: ($) =>
      choice($.bash_section, $.js_section, $.txt_section, $.python_section, $.file_section),

    bash_section: ($) => seq($.bash_section_header,  alias($.raw_content,$.bash_content,)),
    txt_section: ($) => seq($.txt_section_header, alias($.raw_content,$.txt_content)),
    js_section: ($) => seq($.js_section_header, $._js_and_tags_content),
    python_section: ($) => seq($.python_section_header, alias($.raw_content,$.python_content)),
    file_section: ($) => seq($._file_section_header, $.file),

    tag: ($) => $.alpha_numeric,
    tags: ($) => seq($.tag,repeat(seq(choice(",", "|"), $.tag)),":"),

    role: ($) => seq("@",/[^\S\n]+/),
    options: ($) => /[^\@\n]+/,
    file_name: ($) => /[^\.\n]+/,
    file_extension: ($) => /[^\n]+/,
    file_name_and_extension: ($) => seq($.file_name,".",$.file_extension),
    file: ($) => seq($.file_name_and_extension,"\n",alias($.raw_content,$.file_content)),

    bash_section_names: ($) => choice("script"),
    js_section_names: ($) => choice("variables", "late_variables", "config","include"),
    python_section_names: ($) => choice("pyexit"),
    txt_section_names: ($) => choice("info"),
    _file_section_name: ($) => choice("file"),


    bash_section_header: ($) => 
      seq("%",optional($.tags), alias($.bash_section_names,$.section_name), optional($.role),optional($.options),"\n"), 
    txt_section_header: ($) => 
      seq("%",optional($.tags), alias($.txt_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    js_section_header: ($) =>
      seq("%",optional($.tags), alias($.js_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    python_section_header: ($) =>
      seq("%",optional($.tags), alias($.python_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    _file_section_header: ($) =>
      seq("%",optional($.tags), alias($._file_section_name,$.section_name), optional($.role)),


    // Giving low priority to JS parsing
    js_line: ($) => prec(-1,seq($._content_line, "\n")),
    js_line_and_tags: ($) => seq($.tags,$._content_line, "\n"),
    _js_and_tags_content: ($) => repeat1(choice($.js_line_and_tags,$.js_line)),
    raw_content: ($) => repeat1(seq($._content_line)),
    comment_block: ($) => prec(-1,repeat1(seq($._comment_line))),
    // This is dumb, but it works for now
    alpha_numeric: ($) =>/[a-zA-Z0-9_-]+/,
  },
});
