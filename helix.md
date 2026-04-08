# Helix Installation

### 1. Add the language to languages.toml

Paste the block below in `~/.config/helix/languages.toml`:

```toml
[[language]]
name = "npf"
scope = "source.npf"
injection-regex = "npf"
file-types = ["npf"]
comment-token = "//"
roots = []
indent = { tab-width = 4, unit = "    " }

[[grammar]]
name = "npf"
source = { git = "https://github.com/ntyunyayev/tree-sitter-npf", rev = "main" }

```

### 2. Fetch and build the grammar

Run this command to fetch the grammar:

```bash
hx --grammar fetch
```

Then build the grammar (this may take some time):

```bash
hx --grammar build
```

### 3. Install query files

Copy the query files to your Helix config:

```bash
mkdir -p ~/.config/helix/runtime/queries/npf
cp /path/to/tree-sitter-npf/queries/*.scm ~/.config/helix/runtime/queries/npf/
```

## Uninstall

Remove the sources:

```bash
rm -rf ~/.config/helix/runtime/grammars/sources/npf
```

Remove the compiled grammar:

```bash
rm -rf ~/.config/helix/runtime/grammars/npf.so
```

Remove the query files:

```bash
rm -rf ~/.config/helix/runtime/queries/npf
```

Remove the language configuration from `~/.config/helix/languages.toml`.
