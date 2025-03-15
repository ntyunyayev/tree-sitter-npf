(file 
   (file_name_and_extension
      (_)*
      (file_extension) @injection.language
      (_)*
    )
    (file_content) @injection.content)

((bash_content) @injection.content
 (#set! injection.language "bash"))

((js_line) @injection.content
 (#set! injection.combined)
 (#set! injection.language "javascript"))

((python_content) @injection.content
 (#set! injection.language "python"))

