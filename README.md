# tree-sitter-npf

Simple tree-sitter parser for the [NPF](https://github.com/tbarbette/npf) configuration file format.

## Description

The goal of this project is to provide a simple parser aimed at syntax highlighting. Exact parsing is not the primary goal. The parser should work with any editor that supports tree-sitter.

## Getting Started

### Dependencies

* Recent neovim

### Installing

* Currently, the parser is not merged into nvim-treesitter, you need to use the following [fork](https://github.com/ntyunyayev/nvim-treesitter). (I haven't managed to make *vim.treesitter.query.set* work)

## Supported features 

* most sections are supported
* %file sections correctly inject the parser based on the file extension
* Comment inside and outside sections are supported

## TODO

* Add tests
* Add support for $(( PYTHON_CODE ))
* JINJA support
* Use external scanner for more precise parsing

