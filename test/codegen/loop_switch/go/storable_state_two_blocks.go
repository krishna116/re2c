// Code generated by re2c, DO NOT EDIT.
//go:generate re2go -f $INPUT -o $OUTPUT --loop-switch -i



	yystate := YYGETSTATE
	for {
		switch (yystate) {
		case -1:
			fallthrough
		case 0:
			YYSETSTATE
			if (YYLESSTHAN) {
				YYFILL
			}
			yych = YYPEEK
			YYSKIP
			switch (yych) {
			case 'a':
				yystate = 3
				continue
			default:
				yystate = 1
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			YYSETSTATE
			{ * }
		case 3:
			yystate = 4
			continue
		case 4:
			YYSETSTATE
			{ a }
		case 5:
			yystate = 0
			continue
		default:
			panic("internal lexer error")
		}
	}




	yystate := YYGETSTATE
	for {
		switch (yystate) {
		case -1:
			fallthrough
		case 0:
			yych = YYPEEK
			switch (yych) {
			case 'b':
				YYSKIP
				yystate = 3
				continue
			default:
				if (YYLESSTHAN) {
					YYSETSTATE
					YYFILL
				}
				YYSKIP
				yystate = 1
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			YYSETSTATE
			{ * }
		case 3:
			yystate = 4
			continue
		case 4:
			YYSETSTATE
			{ b }
		case 5:
			YYSETSTATE
			{ $ }
		case 6:
			if (YYLESSTHAN) {
				yystate = 5
				continue
			}
			yystate = 0
			continue
		default:
			panic("internal lexer error")
		}
	}

