module.exports = grammar({
  name: "npf",
  rules: {
    document: ($) => repeat1($.section),
    section: ($) =>
      choice($.bash_section, $.python_section, $.txt_section),
    bash_section: ($) => seq($.bash_section_header,  alias($.raw_content,$.bash_content,)),
    txt_section: ($) => seq($.txt_section_header, alias($.raw_content,$.txt_content)),
    python_section: ($) => seq($.python_section_header, alias($.raw_content,$.python_content)),

    tag: ($) => $.alpha_numeric,
    tags: ($) => seq($.tag,repeat(seq(choice(",", "|"), $.tag))),

    role: ($) => /[^\S\n]+/,
    options: ($) => /[^\@\n]+/,

    bash_section_names: ($) => choice("%script"),
    python_section_names: ($) => choice("%pyexit", "%variables", "%late_variables", "%config"),
    txt_section_names: ($) => choice("%info"),

    bash_section_header: ($) => 
      seq(optional($.tags), alias($.bash_section_names,$.section_name), optional($.role),optional($.options),"\n"), 
    txt_section_header: ($) => 
      seq(optional($.tags), alias($.txt_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    python_section_header: ($) =>
      seq(optional($.tags), alias($.python_section_names,$.section_name), optional($.role),optional($.options),"\n"),
    raw_content: ($) => repeat1(/[^%\n]*\n/),
    // This is dumb, but it works for now
    alpha_numeric: ($) =>/[a-zA-Z0-9_-]+/,
  },
});
