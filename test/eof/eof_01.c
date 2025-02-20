/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
#include <stdio.h>
#include <string.h>

static const size_t SIZE = 4096;

struct input_t {
    char buf[SIZE + 1];
    char *lim;
    char *cur;
    char *tok;
    bool eof;

    input_t()
        : buf()
        , lim(buf + SIZE)
        , cur(lim)
        , tok(lim)
        , eof(false)
    {
        fill();
    }
    int fill()
    {
        if (eof) {
            return 1;
        }
        const size_t free = tok - buf;
        if (free < 1) {
            return 2;
        }
        memmove(buf, tok, lim - tok);
        lim -= free;
        cur -= free;
        tok -= free;
        lim += fread(lim, 1, free, stdin);
        lim[0] = 0;
        if (lim < buf + SIZE) {
            eof = true;
        }
        return 0;
    }
};

static bool lex(input_t & in, unsigned int &count)
{
    for (count = 0;;) {
        in.tok = in.cur;
        
{
	char yych;
yyFillLabel0:
	yych = *in.cur;
	switch (yych) {
		case '\n': goto yy4;
		case '"': goto yy7;
		case '\'': goto yy8;
		case '+':
		case '-': goto yy9;
		case '0': goto yy10;
		case '1': goto yy12;
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'U':
		case 'V':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 'u':
		case 'v':
		case 'x':
		case 'y':
		case 'z': goto yy16;
		case 'F':
		case 'f': goto yy19;
		case 'M':
		case 'm': goto yy20;
		case 'S':
		case 's': goto yy21;
		case 'T':
		case 't': goto yy22;
		case 'W':
		case 'w': goto yy23;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel0;
				goto yy58;
			}
			goto yy2;
	}
yy2:
	++in.cur;
yy3:
	{ return false; }
yy4:
	++in.cur;
yyFillLabel1:
	yych = *in.cur;
	switch (yych) {
		case '\n': goto yy4;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel1;
			}
			goto yy6;
	}
yy6:
	{ continue; }
yy7:
	YYMARKER = ++in.cur;
yyFillLabel2:
	yych = *in.cur;
	if (yych <= 0x00) {
		if (in.lim <= in.cur) {
			if (in.fill() == 0) goto yyFillLabel2;
			goto yy3;
		}
		goto yy24;
	}
	goto yy25;
yy8:
	YYMARKER = ++in.cur;
yyFillLabel3:
	yych = *in.cur;
	if (yych <= 0x00) {
		if (in.lim <= in.cur) {
			if (in.fill() == 0) goto yyFillLabel3;
			goto yy3;
		}
		goto yy29;
	}
	goto yy30;
yy9:
	++in.cur;
yyFillLabel4:
	yych = *in.cur;
	switch (yych) {
		case '0': goto yy10;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel4;
			}
			goto yy3;
	}
yy10:
	++in.cur;
yy11:
	{ ++count; continue; }
yy12:
	++in.cur;
yyFillLabel5:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		case '2': goto yy34;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel5;
			}
			goto yy13;
	}
yy13:
	{ ++count; continue; }
yy14:
	++in.cur;
yyFillLabel6:
	yych = *in.cur;
yy15:
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel6;
			}
			goto yy11;
	}
yy16:
	++in.cur;
yyFillLabel7:
	yych = *in.cur;
yy17:
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy16;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel7;
			}
			goto yy18;
	}
yy18:
	{ ++count; continue; }
yy19:
	++in.cur;
yyFillLabel8:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel8;
			}
			goto yy18;
		case 'R':
		case 'r': goto yy35;
		default: goto yy17;
	}
yy20:
	++in.cur;
yyFillLabel9:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel9;
			}
			goto yy18;
		case 'O':
		case 'o': goto yy36;
		default: goto yy17;
	}
yy21:
	++in.cur;
yyFillLabel10:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel10;
			}
			goto yy18;
		case 'A':
		case 'a': goto yy37;
		case 'U':
		case 'u': goto yy36;
		default: goto yy17;
	}
yy22:
	++in.cur;
yyFillLabel11:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel11;
			}
			goto yy18;
		case 'H':
		case 'h': goto yy38;
		case 'U':
		case 'u': goto yy39;
		default: goto yy17;
	}
yy23:
	++in.cur;
yyFillLabel12:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel12;
			}
			goto yy18;
		case 'E':
		case 'e': goto yy40;
		default: goto yy17;
	}
yy24:
	++in.cur;
yyFillLabel13:
	yych = *in.cur;
yy25:
	switch (yych) {
		case '"': goto yy26;
		case '\\': goto yy28;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel13;
				goto yy59;
			}
			goto yy24;
	}
yy26:
	++in.cur;
	{ ++count; continue; }
yy28:
	++in.cur;
yyFillLabel14:
	yych = *in.cur;
	if (yych <= 0x00) {
		if (in.lim <= in.cur) {
			if (in.fill() == 0) goto yyFillLabel14;
			goto yy59;
		}
		goto yy24;
	}
	goto yy24;
yy29:
	++in.cur;
yyFillLabel15:
	yych = *in.cur;
yy30:
	switch (yych) {
		case '\'': goto yy31;
		case '\\': goto yy33;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel15;
				goto yy59;
			}
			goto yy29;
	}
yy31:
	++in.cur;
	{ ++count; continue; }
yy33:
	++in.cur;
yyFillLabel16:
	yych = *in.cur;
	if (yych <= 0x00) {
		if (in.lim <= in.cur) {
			if (in.fill() == 0) goto yyFillLabel16;
			goto yy59;
		}
		goto yy29;
	}
	goto yy29;
yy34:
	++in.cur;
yyFillLabel17:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		case '3': goto yy41;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel17;
			}
			goto yy13;
	}
yy35:
	++in.cur;
yyFillLabel18:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel18;
			}
			goto yy18;
		case 'I':
		case 'i': goto yy42;
		default: goto yy17;
	}
yy36:
	++in.cur;
yyFillLabel19:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel19;
			}
			goto yy18;
		case 'N':
		case 'n': goto yy42;
		default: goto yy17;
	}
yy37:
	++in.cur;
yyFillLabel20:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel20;
			}
			goto yy18;
		case 'T':
		case 't': goto yy43;
		default: goto yy17;
	}
yy38:
	++in.cur;
yyFillLabel21:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel21;
			}
			goto yy18;
		case 'U':
		case 'u': goto yy44;
		default: goto yy17;
	}
yy39:
	++in.cur;
yyFillLabel22:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel22;
			}
			goto yy18;
		case 'E':
		case 'e': goto yy45;
		default: goto yy17;
	}
yy40:
	++in.cur;
yyFillLabel23:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel23;
			}
			goto yy18;
		case 'D':
		case 'd': goto yy46;
		default: goto yy17;
	}
yy41:
	++in.cur;
yyFillLabel24:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel24;
			}
			goto yy11;
		case '4': goto yy47;
		default: goto yy15;
	}
yy42:
	++in.cur;
yyFillLabel25:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel25;
			}
			goto yy18;
		case 'D':
		case 'd': goto yy48;
		default: goto yy17;
	}
yy43:
	++in.cur;
yyFillLabel26:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel26;
			}
			goto yy18;
		case 'U':
		case 'u': goto yy49;
		default: goto yy17;
	}
yy44:
	++in.cur;
yyFillLabel27:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel27;
			}
			goto yy18;
		case 'R':
		case 'r': goto yy45;
		default: goto yy17;
	}
yy45:
	++in.cur;
yyFillLabel28:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel28;
			}
			goto yy18;
		case 'S':
		case 's': goto yy42;
		default: goto yy17;
	}
yy46:
	++in.cur;
yyFillLabel29:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel29;
			}
			goto yy18;
		case 'N':
		case 'n': goto yy39;
		default: goto yy17;
	}
yy47:
	++in.cur;
yyFillLabel30:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel30;
			}
			goto yy11;
		case '5': goto yy50;
		default: goto yy15;
	}
yy48:
	++in.cur;
yyFillLabel31:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel31;
			}
			goto yy18;
		case 'A':
		case 'a': goto yy51;
		default: goto yy17;
	}
yy49:
	++in.cur;
yyFillLabel32:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel32;
			}
			goto yy18;
		case 'R':
		case 'r': goto yy42;
		default: goto yy17;
	}
yy50:
	++in.cur;
yyFillLabel33:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '7':
		case '8':
		case '9': goto yy14;
		case '6': goto yy52;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel33;
			}
			goto yy13;
	}
yy51:
	++in.cur;
yyFillLabel34:
	yych = *in.cur;
	switch (yych) {
		case 0x00:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel34;
			}
			goto yy18;
		case 'Y':
		case 'y': goto yy53;
		default: goto yy17;
	}
yy52:
	++in.cur;
yyFillLabel35:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '8':
		case '9': goto yy14;
		case '7': goto yy55;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel35;
			}
			goto yy13;
	}
yy53:
	++in.cur;
yyFillLabel36:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case 'A':
		case 'B':
		case 'C':
		case 'D':
		case 'E':
		case 'F':
		case 'G':
		case 'H':
		case 'I':
		case 'J':
		case 'K':
		case 'L':
		case 'M':
		case 'N':
		case 'O':
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
		case 'T':
		case 'U':
		case 'V':
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
		case '_':
		case 'a':
		case 'b':
		case 'c':
		case 'd':
		case 'e':
		case 'f':
		case 'g':
		case 'h':
		case 'i':
		case 'j':
		case 'k':
		case 'l':
		case 'm':
		case 'n':
		case 'o':
		case 'p':
		case 'q':
		case 'r':
		case 's':
		case 't':
		case 'u':
		case 'v':
		case 'w':
		case 'x':
		case 'y':
		case 'z': goto yy16;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel36;
			}
			goto yy54;
	}
yy54:
	{ ++count; continue; }
yy55:
	++in.cur;
yyFillLabel37:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '9': goto yy14;
		case '8': goto yy56;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel37;
			}
			goto yy13;
	}
yy56:
	++in.cur;
yyFillLabel38:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8': goto yy14;
		case '9': goto yy57;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel38;
			}
			goto yy13;
	}
yy57:
	++in.cur;
yyFillLabel39:
	yych = *in.cur;
	switch (yych) {
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto yy14;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel39;
			}
			goto yy13;
	}
yy58:
	{ return true; }
yy59:
	in.cur = YYMARKER;
	goto yy3;
}

    }
}

int main()
{
    input_t in;
    unsigned int count;
    if (lex(in, count)) {
        printf("glorious %u numbers!\n", count);
    } else {
        printf("error\n");
    }

    return 0;
}
