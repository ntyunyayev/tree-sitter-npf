# tree-sitter-npf

Simple tree-sitter parser for the [NPF](https://github.com/tbarbette/npf) configuration file format.

## Description

The goal of this project is to provide a simple parser aimed at syntax highlighting. Exact parsing is not the primary goal. Currently only the neovim integration is working. 

## Getting Started

### Dependencies

* Recent neovim

### Installing

* Currently, the parser is not merged into nvim-treesitter, you need to use the following [fork](https://github.com/ntyunyayev/nvim-treesitter). (I haven't managed to make *vim.treesitter.query.set* work)

### TODO

* Handle %file sections
    * It would be nice to look at the extension and inject the appropriate parser
* Integrate with more editors 
* Add tests
* Add support for $(( PYTHON_CODE ))
* JINJA support
* Use external scanner for more precise parsing

