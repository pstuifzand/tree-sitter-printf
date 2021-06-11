# tree-sitter-printf

## Add to Neovim

Add this to your Neovim config.

```lua
lua << EOF
if pcall(require, "nvim-treesitter.parsers") then
  local parser_config = require "nvim-treesitter.parsers".get_parser_configs()
  parser_config.printf = {
    install_info = {
      url = "https://github.com/pstuifzand/tree-sitter-printf",
      files = { "src/parser.c" },
    },
    filetype = "printf",
  }
end

EOF
```

## Injections

### `~/.config/nvim/after/queries/go/injections.scm`

Example of how to inject the printf grammar into the Go grammar.

```tree-sitter
(call_expression
    function:
        (selector_expression field: (field_identifier) @_method)
        (#match? @_method "^Sprintf|Printf|Fprintf|Fatalf$")
    arguments: (argument_list . (interpreted_string_literal) @printf)
)
```

### `~/.config/nvim/after/queries/printf/highlights.scm`

Highlight the formats. This will highlight the format with one color.

```tree-sitter
(format) @printf
```

### Author

Peter Stuifzand
