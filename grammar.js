module.exports = grammar({
    name: 'typst',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.text,
            $.title,
            $._expressions,
            $.list,
            $.comment,
        ),

        title: $ => seq(
            '=',
            $.text,
            "\n",
        ),

        set_rule: $ => seq(
            '#',
            'set',
            $.function
        ),

        _expressions: $ => seq(
            '#',
            choice(
                $.function,
                $.set_rule,
            ),
        ),
        function: $ => seq(
            field("name", $.identifier),
            field("parameters", $.parameter_list),
            field("block", optional($.block)),
            field("tag", optional($.tag)),
        ),

        parameter_list: $ => seq(
            "(",
            sepBy(",", $._parameter),
            ")"
        ),

        _parameter: $ => choice(
            /* $.function, */
            $._named_parameter,
            $.identifier,
        ),

        _named_parameter: $ => seq(
            $.identifier,
            ":",
            $._type,
        ),

        block: $ => seq(
            "[",
            $.text,
            "]"
        ),

        tag: $ => seq(
            "<",
            $.identifier,
            ">"
        ),

        set_rule: $ => seq(
            "set",
            $.function,
        ),

        list: $ => seq(
            prec.right(
                repeat1(seq(
                    $.list_item
                )),
            ),
        ),


        list_item: $ => seq(
            $._list_marker,
            /[a-zA-Z0-9 ._-]+/,
        ),

        _list_marker: $ => choice(
            "-",
            "+"
        ),

        _type: $ => choice(
            $.string,
            $.int,
            $.bool
        ),

        string: $ => seq(
            "\"",
            repeat(/[^\n]/),
            "\""
        ),

        int: $ => /[0-9]+/,

        bool : $ => choice(
            "true",
            "false"
        ),

        comment: $ => seq(
            "/*",
            repeat(alias($.text, "comment")),
            "*/"
        ),

        identifier: $ => /[a-z]+/,

        text: $ => prec.right(repeat1(choice($._word))),
        _word: $ => /[a-zA-Z0-9]+/,

    }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
