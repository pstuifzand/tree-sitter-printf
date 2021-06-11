module.exports = grammar({
    name: 'printf',

    rules: {
        format_string: $ => seq('"', optional(repeat($.text_parts)), '"'),

        text_parts: $ => choice($.text, $.format, '%%'),

        format: $ => seq('%', 
            optional(field('flags', $.flags)),
            optional(field('width', $.width)),
            optional(field('precision', $.precision)),
            optional(field('size', $.size)),
            field('type', $.type)
        ),

        type: $ => /[a-z]/,

        flags: $ => /[ +0#-]/,

        width: $ => /0?[0-9*]+/,

        precision: $ => /\.[0-9]*/,

        size: $ => choice('hh', 'h', 'j', 'l', 'L', 'll', 't', 'w', 'z', 'I', 'I32', 'I64'),

        text: $ => /[^%]+/,
    }
});
