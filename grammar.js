module.exports = grammar({
  name: "npf",
  externals: ($) => [$._content_line, $.comment_line],
  rules: {
    document: ($) => repeat1(choice($.section, $.comment_block)),
    section: ($) =>
      choice($.bash_section, $.js_section, $.txt_section, $.python_section, $.lua_file_section),

    bash_section: ($) => seq($.bash_section_header,  alias($.raw_content,$.bash_content,)),
    txt_section: ($) => seq($.txt_section_header, alias($.raw_content,$.txt_content)),
    js_section: ($) => seq($.js_section_header, $._js_and_tags_content),
    python_section: ($) => seq($.python_section_header, alias($.raw_content,$.python_content)),
    lua_file_section: ($) => seq($.lua_file_section_header, alias($.raw_content,$.lua_content)),

    tag: ($) => $.alpha_numeric,
    tags: ($) => seq($.tag,repeat(seq(choice(",", "|"), $.tag)),":"),

    role: ($) => seq("@",/[^\S\n]+/),
    options: ($) => /[^\@\n]+/,
    filename: ($) => /[^\s]*\.lua[^\s]*/,

    bash_section_names: ($) => choice("script"),
    js_section_names: ($) => choice("variables", "late_variables", "config"),
    python_section_names: ($) => choice("pyexit"),
    txt_section_names: ($) => choice("info"),
    file_section_names: ($) => choice("file"),


    bash_section_header: ($) => 
      seq("%",optional($.tags), alias($.bash_section_names,$.section_name), optional($.role),optional($.options),"\n"), 
    txt_section_header: ($) => 
      seq("%",optional($.tags), alias($.txt_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    js_section_header: ($) =>
      seq("%",optional($.tags), alias($.js_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    python_section_header: ($) =>
      seq("%",optional($.tags), alias($.python_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    lua_file_section_header: ($) =>
      seq("%",optional($.tags), alias($.file_section_names,$.section_name), optional($.role),$.filename,"\n"),

    // Giving low priority to JS parsing
    js_line: ($) => prec(-1,seq($._content_line, "\n")),
    js_line_and_tags: ($) => seq($.tags,$._content_line, "\n"),
    _js_and_tags_content: ($) => repeat1(choice($.js_line_and_tags,$.js_line)),
    raw_content: ($) => repeat1(seq($._content_line, "\n")),
    comment_block: ($) => prec(-1,repeat1(seq($.comment_line, "\n"))),
    // This is dumb, but it works for now
    alpha_numeric: ($) =>/[a-zA-Z0-9_-]+/,
  },
});
