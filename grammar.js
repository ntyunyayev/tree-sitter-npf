module.exports = grammar({
  name: "npf",
  rules: {
    document: ($) => repeat1($.section),
    section: ($) =>
      choice($.bash_section, $.js_section, $.txt_section, $.python_section),

    bash_section: ($) => seq($.bash_section_header,  alias($.raw_content,$.bash_content,)),
    txt_section: ($) => seq($.txt_section_header, alias($.raw_content,$.txt_content)),
    js_section: ($) => seq($.js_section_header, $._js_and_tags_content),
    python_section: ($) => seq($.python_section_header, alias($.raw_content,$.python_content)),

    tag: ($) => $.alpha_numeric,
    tags: ($) => seq($.tag,repeat(seq(choice(",", "|"), $.tag)),":"),

    role: ($) => seq("@",/[^\S\n]+/),
    options: ($) => /[^\@\n]+/,

    bash_section_names: ($) => choice("script"),
    js_section_names: ($) => choice("variables", "late_variables", "config"),
    python_section_names: ($) => choice("pyexit"),
    txt_section_names: ($) => choice("info","file"),

    bash_section_header: ($) => 
      seq("%",optional($.tags), alias($.bash_section_names,$.section_name), optional($.role),optional($.options),"\n"), 
    txt_section_header: ($) => 
      seq("%",optional($.tags), alias($.txt_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    js_section_header: ($) =>
      seq("%",optional($.tags), alias($.js_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    python_section_header: ($) =>
      seq("%",optional($.tags), alias($.python_section_names,$.section_name), optional($.role),optional($.options),"\n"),

    // Giving low priority to JS parsing
    js_line: ($) => token(prec(-1,/[^%\n]*\n/)),
    js_line_and_tags: ($) => seq($.tags,$.js_line),
    _js_and_tags_content: ($) => repeat1(choice($.js_line_and_tags,$.js_line)),
    raw_content: ($) => repeat1(/[^%\n]*\n/),
    // This is dumb, but it works for now
    alpha_numeric: ($) =>/[a-zA-Z0-9_-]+/,
  },
});
