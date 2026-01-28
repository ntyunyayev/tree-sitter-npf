; Section headers - keywords
"info" @keyword
"config" @keyword
"variables" @keyword
"late_variables" @keyword
"pypost" @keyword
"pyexit" @keyword
"script" @keyword
"init" @keyword
"exit" @keyword
"require" @keyword
"include" @keyword
"import" @keyword
"sendfile" @keyword
"file" @keyword
"init-file" @keyword

; Flags
(jinja_flag) @keyword.modifier
(noparse_flag) @keyword.modifier

; Section marker
"%" @punctuation.special

; Role
(role "@" @operator)
(role_name) @variable.parameter
(multiplier) @number

; Tags
(tag "-" @operator)
(tag (identifier) @label)

; Parameters
(param (value) @string)
"=" @operator

; Content
(text_content) @string
(bash_content) @embedded
(python_content) @embedded
(file_content) @string
(config_content) @property
(variables_content) @property

; Inline Python expressions $(( ... ))
(python_expr) @embedded

; Filenames
(file_basename) @string.special.path
(file_extension) @type
"." @punctuation.delimiter

; Comments
(comment) @comment
