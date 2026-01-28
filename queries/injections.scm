; Bash content injection
((bash_content) @injection.content
 (#set! injection.language "bash"))

; Python content injection
((python_content) @injection.content
 (#set! injection.language "python"))

; Inline Python expressions $(( ... )) - inject Python inside the expression
((python_expr) @injection.content
 (#set! injection.language "python"))

; ============================================
; File content injection based on extension
; ============================================

; Python files (.py)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "py")
 (#set! injection.language "python"))

; Lua files (.lua)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "lua")
 (#set! injection.language "lua"))

; JavaScript files (.js)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "js")
 (#set! injection.language "javascript"))

; TypeScript files (.ts)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "ts")
 (#set! injection.language "typescript"))

; Click configuration files (.click)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "click")
 (#set! injection.language "click"))

; Shell scripts (.sh, .bash)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "sh" "bash")
 (#set! injection.language "bash"))

; JSON files (.json)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "json")
 (#set! injection.language "json"))

; YAML files (.yml, .yaml)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "yml" "yaml")
 (#set! injection.language "yaml"))

; TOML files (.toml)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "toml")
 (#set! injection.language "toml"))

; XML files (.xml)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "xml")
 (#set! injection.language "xml"))

; HTML files (.html, .htm)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "html" "htm")
 (#set! injection.language "html"))

; CSS files (.css)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "css")
 (#set! injection.language "css"))

; C files (.c, .h)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "c" "h")
 (#set! injection.language "c"))

; C++ files (.cpp, .hpp, .cc, .cxx)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "cpp" "hpp" "cc" "cxx")
 (#set! injection.language "cpp"))

; Rust files (.rs)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "rs")
 (#set! injection.language "rust"))

; Go files (.go)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "go")
 (#set! injection.language "go"))

; Ruby files (.rb)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "rb")
 (#set! injection.language "ruby"))

; Perl files (.pl, .pm)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "pl" "pm")
 (#set! injection.language "perl"))

; SQL files (.sql)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#eq? @_ext "sql")
 (#set! injection.language "sql"))

; Makefile
((file_section
  (file_header
    (filename
      name: (file_basename) @_name))
  (file_content) @injection.content)
 (#eq? @_name "Makefile")
 (#set! injection.language "make"))

; Dockerfile
((file_section
  (file_header
    (filename
      name: (file_basename) @_name))
  (file_content) @injection.content)
 (#eq? @_name "Dockerfile")
 (#set! injection.language "dockerfile"))

; Config/text files (.txt, .cfg, .conf, .ini)
((file_section
  (file_header
    (filename
      extension: (file_extension) @_ext))
  (file_content) @injection.content)
 (#any-of? @_ext "txt" "cfg" "conf" "ini")
 (#set! injection.language "ini"))

; ============================================
; Jinja templates (when jinja flag is set)
; ============================================

; Script with jinja flag
((script_section
  (script_header
    (jinja_flag))
  (bash_content) @injection.content)
 (#set! injection.language "jinja"))

; Init with jinja flag
((init_section
  (init_header
    (jinja_flag))
  (bash_content) @injection.content)
 (#set! injection.language "jinja"))

; Exit with jinja flag
((exit_section
  (exit_header
    (jinja_flag))
  (bash_content) @injection.content)
 (#set! injection.language "jinja"))

; Require with jinja flag
((require_section
  (require_header
    (jinja_flag))
  (bash_content) @injection.content)
 (#set! injection.language "jinja"))

; File with jinja flag
((file_section
  (file_header
    (jinja_flag))
  (file_content) @injection.content)
 (#set! injection.language "jinja"))
