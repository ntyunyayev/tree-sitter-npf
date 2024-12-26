module.exports = grammar({
  name: "npf",

  rules: {
    document: ($) => repeat($.section),
    section: ($) =>
      choice($.bash_section, $.python_section, $.txt_section),
    bash_section: ($) => seq($.bash_section_header, $.bash_content),
    txt_section: ($) => seq($.txt_section_header, $.txt_content),
    python_section: ($) => seq($.python_section_header, $.python_content),
    tags: ($) => seq($.tag,repeat(seq(choice(",", "|"), $.tag))),
    role: ($) => $.alpha_numeric,
    tag: ($) => $.alpha_numeric,
    options: ($) => /[^\n]+/,
    role_and_optional_tags: ($) => seq($.role, optional($.tags)),
    bash_section_names: ($) => choice("script"),
    bash_section_header: ($) => 
      seq(optional($.tags),"%", $.bash_section_names, optional(seq("@", ($.role))),optional($.options),"\n"), 
    txt_section_header: ($) => 
      seq(optional($.tags),"%", choice("info"), optional(seq("@", ($.role))),"\n"),
    python_section_header: ($) =>
      seq(optional($.tags),"%", choice("pyexit", "variables", "late_variables", "config"), optional(seq("@", ($.role))),optional($.options),"\n"),

    txt_content: ($) => repeat1($._non_percent_line),
    python_content: ($) => repeat1($._non_percent_line),
    bash_content: ($) => repeat1($._non_percent_line),
    _non_percent_line: ($) => seq(/[^%\n]/, /[^\n]*/, "\n"),
    alpha_numeric: ($) =>/[a-zA-Z0-9_-]+/,
  },
});
