# tree-sitter-printf

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
