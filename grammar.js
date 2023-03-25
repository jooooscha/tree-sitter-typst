module.exports = grammar({
    name: 'typst',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.text,
            $.title,
            $.function,
            $.list,
            $.comment,
        ),

        title: $ => seq(
            '=',
            $.text,
        ),

        function: $ => seq(
            '#',
            alias($.inline_function, "function"),
        ),
        inline_function: $ => seq(
            $.name,
            $.parameter_list,
            choice(
                $.tag,
                $.block
            ),
        ),

        parameter_list: $ => seq(
            "(",
            optional(
                seq(
                    $._parameter,
                    repeat(
                        seq(",", $._parameter),
                    ),
                ),
            ),
            ")"
        ),

        _parameter: $ => choice(
            $.name,
            $.inline_function,
            $.named_parameter
        ),

        named_parameter: $ => seq(
            $.name,
            ":",
            $._type
        ),

        _type: $ => choice(
            $.string,
            $.int,
            $.bool
        ),

        string: $ => seq(
            "\"",
            /.*/,
            "\""
        ),

        int: $ => /[0-9]+/,

        bool : $ => choice(
            "true",
            "false"
        ),

        tag: $ => seq(
            "<",
            $.tag_name,
            ">"
        ),

        block: $ => seq(
            "[",
            $.text,
            "]"
        ),

        list: $ => seq(
            prec.right(
                repeat1($.list_item),
            ),
        ),

        list_item: $ => seq(
            choice("-", "+"),
            /[a-zA-Z0-9 ._-]+/,
        ),

        comment: $ => seq(
            "/*",
            repeat(alias($.text, "comment")),
            "*/"
        ),

        name: $ => /[a-zA-Z]+/,

        tag_name: $ => /[a-z]+/,

        text: $ => /[a-zA-Z0-9 *]+/

    }
});
