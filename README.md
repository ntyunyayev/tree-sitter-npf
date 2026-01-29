# tree-sitter-npf

Simple tree-sitter parser for the [NPF](https://github.com/tbarbette/npf) configuration file format.

## Description

The goal of this project is to provide a simple parser aimed at syntax highlighting. Exact parsing is not the primary goal. The parser should work with any editor that supports tree-sitter.

## Neovim Installation

### 1. Register the parser with nvim-treesitter

Add this to your nvim-treesitter config (works with lazy.nvim, packer, etc.):

```lua
-- In your nvim-treesitter setup
local parser_config = require("nvim-treesitter.parsers").get_parser_configs()
parser_config.npf = {
    install_info = {
        url = "https://github.com/ntyunyayev/tree-sitter-npf",
        files = { "src/parser.c", "src/scanner.c" },
        branch = "main",
        generate_requires_npm = false,
        requires_generate_from_grammar = false,
    },
    filetype = "npf",
}
```

### 2. Add filetype detection

Add this to your `init.lua`:

```lua
vim.filetype.add({
    extension = {
        npf = "npf",
    },
})

-- Optional: set comment format for npf files
vim.api.nvim_create_autocmd("FileType", {
    pattern = "npf",
    callback = function()
        vim.bo.commentstring = "// %s"
    end,
})
```

### 3. Install query files

Copy the query files to your Neovim config:

```bash
mkdir -p ~/.config/nvim/queries/npf
cp queries/highlights.scm ~/.config/nvim/queries/npf/
cp queries/injections.scm ~/.config/nvim/queries/npf/
```

### 4. Install the parser

Run in Neovim:
```
:TSInstall npf
```

### Uninstall / Clean Previous Installation

To remove a previous installation:

```bash
# Remove the query files
rm -rf ~/.config/nvim/queries/npf

# Remove the installed parser
rm -f ~/.local/share/nvim/lazy/nvim-treesitter/parser/npf.so
# Or if using a different plugin manager:
rm -f ~/.local/share/nvim/site/parser/npf.so

# Clear nvim-treesitter cache (if it exists)
rm -rf ~/.cache/nvim/treesitter
```

You can also run in Neovim:
```vim
:TSUninstall npf
```

## Supported features

* All section types (`%script`, `%file`, `%variables`, `%config`, `%init`, `%exit`, etc.)
* `%file` sections correctly inject syntax highlighting based on file extension
* Inline Python expressions `$(( ... ))` in bash content
* Tags (`%tag1,tag2:section`) and negative tags (`%-tag:section`)
* Roles with multipliers (`@role`, `@role-*`, `@role-0`)
* Jinja template flag support
* Comments inside and outside sections

## TODO

* Add folds.scm for section folding
* Helix/Zed editor configuration examples
