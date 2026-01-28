module.exports = grammar({
  name: "npf",
  externals: ($) => [$._content_line, $._python_expr],

  conflicts: ($) => [
    [$.info_section],
    [$.config_section],
    [$.variables_section],
    [$.late_variables_section],
    [$.pypost_section],
    [$.script_section],
    [$.init_section],
    [$.exit_section],
    [$.require_section],
    [$.pyexit_section],
    [$.file_section],
    [$.init_file_section],
  ],

  rules: {
    // Document can contain standalone comments before/between sections
    document: ($) => seq(optional($.comment), repeat1(seq($.section, optional($.comment)))),

    // Standalone comment lines (// at document level)
    comment: ($) => repeat1(/\/\/[^\n]*\n/),

    section: ($) =>
      choice(
        // Simple sections
        $.info_section,
        $.config_section,
        $.variables_section,
        $.late_variables_section,
        $.pypost_section,

        // Script-like sections (bash content)
        $.script_section,
        $.init_section,
        $.exit_section,
        $.require_section,

        // Python sections
        $.pyexit_section,

        // Module/include sections (no content body)
        $.include_section,
        $.import_section,
        $.sendfile_section,

        // File sections
        $.file_section,
        $.init_file_section
      ),

    //=== PRIMITIVES ===

    // Base identifier pattern (must start with alphanumeric, can contain underscore/hyphen)
    identifier: ($) => /[a-zA-Z0-9][a-zA-Z0-9_-]*/,

    // Value pattern matching Python's VALUE_REGEX
    value: ($) => /[a-zA-Z0-9._/,{}^$:-]+/,

    // Tag with optional negation prefix (supports %-tag:section)
    tag: ($) => seq(optional("-"), $.identifier),

    // Tags list with colon terminator
    tags: ($) => seq($.tag, repeat(seq(choice(",", "|"), $.tag)), ":"),

    // Role with optional multiplier (@role or @role-* or @role-0)
    role: ($) =>
      seq(
        "@",
        field("name", $.role_name),
        optional(field("multiplier", $.multiplier))
      ),

    // Role name (alphanumeric only, no hyphens, to allow multiplier parsing)
    role_name: ($) => /[a-zA-Z0-9]+/,

    // Multiplier for roles (-* or -0, -1, etc.)
    multiplier: ($) => seq("-", choice("*", /[0-9]+/)),

    // Key=value parameter (key pattern matches Python's varPattern key part)
    param: ($) =>
      seq(
        field("key", /[a-zA-Z0-9_:-]+/),
        "=",
        optional(field("value", $.value))
      ),

    // Multiple space-separated parameters
    params: ($) => repeat1(seq(/[ \t]+/, $.param)),

    // Flags
    jinja_flag: ($) => "jinja",
    noparse_flag: ($) => "noparse",

    //=== SIMPLE SECTIONS ===

    // %info - plain text content (content optional for empty sections)
    info_section: ($) =>
      seq($.info_header, optional(alias($.raw_content, $.text_content))),
    info_header: ($) => seq("%", optional($.tags), "info", "\n"),

    // %config - configuration content
    config_section: ($) =>
      seq($.config_header, optional(alias($._tagged_content, $.config_content))),
    config_header: ($) => seq("%", optional($.tags), "config", "\n"),

    // %variables - variable definitions
    variables_section: ($) =>
      seq(
        $.variables_header,
        optional(alias($._tagged_content, $.variables_content))
      ),
    variables_header: ($) => seq("%", optional($.tags), "variables", "\n"),

    // %late_variables - late-evaluated variable definitions
    late_variables_section: ($) =>
      seq(
        $.late_variables_header,
        optional(alias($._tagged_content, $.late_variables_content))
      ),
    late_variables_header: ($) =>
      seq("%", optional($.tags), "late_variables", "\n"),

    // %pypost - python post-processing
    pypost_section: ($) =>
      seq($.pypost_header, optional(alias($.raw_content, $.python_content))),
    pypost_header: ($) => seq("%", optional($.tags), "pypost", "\n"),

    //=== SCRIPT-LIKE SECTIONS (bash content) ===

    // %script[@role[-multi]] [jinja] [params...]
    script_section: ($) =>
      seq($.script_header, optional(alias($.raw_content, $.bash_content))),
    script_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "script",
        optional($.role),
        optional(seq(/[ \t]+/, $.jinja_flag)),
        optional($.params),
        "\n"
      ),

    // %init[@role[-multi]] [jinja] [params...]
    init_section: ($) =>
      seq($.init_header, optional(alias($.raw_content, $.bash_content))),
    init_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "init",
        optional($.role),
        optional(seq(/[ \t]+/, $.jinja_flag)),
        optional($.params),
        "\n"
      ),

    // %exit[@role[-multi]] [jinja] [params...]
    exit_section: ($) =>
      seq($.exit_header, optional(alias($.raw_content, $.bash_content))),
    exit_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "exit",
        optional($.role),
        optional(seq(/[ \t]+/, $.jinja_flag)),
        optional($.params),
        "\n"
      ),

    // %require [jinja]
    require_section: ($) =>
      seq($.require_header, optional(alias($.raw_content, $.bash_content))),
    require_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "require",
        optional(seq(/[ \t]+/, $.jinja_flag)),
        "\n"
      ),

    //=== PYTHON SECTIONS ===

    // %pyexit [name]
    pyexit_section: ($) =>
      seq($.pyexit_header, optional(alias($.raw_content, $.python_content))),
    pyexit_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "pyexit",
        optional(seq(/[ \t]+/, field("name", $.identifier))),
        "\n"
      ),

    //=== MODULE/INCLUDE SECTIONS (no content body) ===

    // %include path [params...]
    include_section: ($) => seq($.include_header, optional("\n")),
    include_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "include",
        /[ \t]+/,
        field("path", /[a-zA-Z0-9_./-]+/),
        optional($.params)
      ),

    // %import[@role[-multi]] module [params...]
    import_section: ($) => seq($.import_header, optional("\n")),
    import_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "import",
        optional($.role),
        /[ \t]+/,
        field("module", $.value),
        optional($.params)
      ),

    // %sendfile[@role] path
    sendfile_section: ($) => seq($.sendfile_header, optional("\n")),
    sendfile_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "sendfile",
        optional($.role),
        /[ \t]+/,
        field("path", /[^\n]+/)
      ),

    //=== FILE SECTIONS ===

    // %file[@role] filename [noparse] [jinja]
    file_section: ($) =>
      seq($.file_header, optional(alias($.raw_content, $.file_content))),
    file_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "file",
        optional($.role),
        /[ \t]+/,
        $.filename,
        optional(seq(/[ \t]+/, $.noparse_flag)),
        optional(seq(/[ \t]+/, $.jinja_flag)),
        "\n"
      ),

    // %init-file[@role] filename [noparse] [jinja]
    init_file_section: ($) =>
      seq($.init_file_header, optional(alias($.raw_content, $.file_content))),
    init_file_header: ($) =>
      seq(
        "%",
        optional($.tags),
        "init-file",
        optional($.role),
        /[ \t]+/,
        $.filename,
        optional(seq(/[ \t]+/, $.noparse_flag)),
        optional(seq(/[ \t]+/, $.jinja_flag)),
        "\n"
      ),

    // Filename with extension extraction
    filename: ($) =>
      seq(
        field("name", $.file_basename),
        optional(seq(".", field("extension", $.file_extension)))
      ),

    // File basename (without extension)
    file_basename: ($) => /[a-zA-Z0-9_${}-]+/,

    // File extension
    file_extension: ($) => /[a-zA-Z0-9]+/,

    //=== CONTENT RULES ===

    // Content with optional tag prefixes (for variables/config)
    _tagged_content: ($) =>
      prec.right(repeat1(choice($.tagged_line, $.content_line, $.python_expr, $.line_comment))),
    tagged_line: ($) => seq($.tags, $._content_line),
    content_line: ($) => $._content_line,

    // Raw content (no tag parsing) - can include inline Python expressions and comments
    raw_content: ($) => prec.right(repeat1(choice($._content_line, $.python_expr, $.line_comment))),

    // Line comment inside content (// to end of line)
    line_comment: ($) => prec(1, /\/\/[^\n]*\n/),

    // Python expression $(( ... )) - injects Python code
    python_expr: ($) => $._python_expr,
  },
});
