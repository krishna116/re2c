//go:generate re2go $INPUT -o $OUTPUT -i --header src/lexer/lexer.go
package main

import "lexer" // generated by re2c

/*!header:re2c:on*/
package lexer

type State struct {
	Data string
	Cur, Mar, /*!stags:re2c format="@@{tag}"; separator=", "; */ int
}
/*!header:re2c:off*/

func lex(st *lexer.State) int {
	/*!re2c
		re2c:header = "src/lexer/lexer.go";
		re2c:yyfill:enable = 0;
		re2c:define:YYCTYPE      = byte;
		re2c:define:YYPEEK       = "st.Data[st.Cur]";
		re2c:define:YYSKIP       = "st.Cur++";
		re2c:define:YYBACKUP     = "st.Mar = st.Cur";
		re2c:define:YYRESTORE    = "st.Cur = st.Mar";
		re2c:define:YYRESTORETAG = "st.Cur = @@{tag}";
		re2c:define:YYSTAGP      = "@@{tag} = st.Cur";
		re2c:tags            = 1;
		re2c:tags:expression = "st.@@{tag}";
		re2c:tags:prefix     = "Tag";

		[x]{1,4} / [x]{3,5} { return 0 } // ambiguous trailing context
		*                   { return 1 }
	*/
}

func main() {
	st := &lexer.State{Data:"xxxxxxxx\x00",}
	if !(lex(st) == 0 && st.Cur == 4) {
		panic("error")
	}
}
