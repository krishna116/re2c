/* Generated by re2c */
#line 1 "eof/eof_10_fill.re"
// re2c $INPUT -o $OUTPUT 
#include <stdio.h>
#include <string.h>

#define SIZE 4096

typedef struct {
    FILE *file;
    char buf[SIZE + 1], *lim, *cur, *tok;
    int eof;
} Input;

static int fill(Input *in)
{
    if (in->eof) {
        return 1;
    }
    const size_t free = in->tok - in->buf;
    if (free < 1) {
        return 2;
    }
    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->tok -= free;
    in->lim += fread(in->lim, 1, free, in->file);
    in->lim[0] = 0;
    in->eof |= in->lim < in->buf + SIZE;
    return 0;
}

static void init(Input *in, FILE *file)
{
    in->file = file;
    in->cur = in->tok = in->lim = in->buf + SIZE;
    in->eof = 0;
    fill(in);
}

#define YYFILL() fill(in)
static int lex(Input *in)
{
    int count = 0;
loop:
    in->tok = in->cur;
    
#line 50 "eof/eof_10_fill.c"
{
	char yych;
	unsigned int yyaccept = 0;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case ' ': goto yy4;
		case '\'': goto yy7;
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
		case 'z': goto yy8;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel0;
				goto yy18;
			}
			goto yy2;
	}
yy2:
	++in->cur;
yy3:
#line 52 "eof/eof_10_fill.re"
	{ return -1; }
#line 97 "eof/eof_10_fill.c"
yy4:
	++in->cur;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case ' ': goto yy4;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel1;
			}
			goto yy6;
	}
yy6:
#line 56 "eof/eof_10_fill.re"
	{ goto loop; }
#line 113 "eof/eof_10_fill.c"
yy7:
	yyaccept = 0;
	YYMARKER = ++in->cur;
yyFillLabel2:
	yych = *in->cur;
	if (yych <= 0x00) {
		if (in->lim <= in->cur) {
			if (YYFILL() == 0) goto yyFillLabel2;
			goto yy3;
		}
		goto yy11;
	}
	goto yy12;
yy8:
	++in->cur;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
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
		case 'z': goto yy8;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel3;
			}
			goto yy10;
	}
yy10:
#line 54 "eof/eof_10_fill.re"
	{ ++count; goto loop; }
#line 167 "eof/eof_10_fill.c"
yy11:
	++in->cur;
yyFillLabel4:
	yych = *in->cur;
yy12:
	switch (yych) {
		case '\'': goto yy13;
		case '\\': goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel4;
				goto yy19;
			}
			goto yy11;
	}
yy13:
	++in->cur;
yy14:
#line 55 "eof/eof_10_fill.re"
	{ ++count; goto loop; }
#line 188 "eof/eof_10_fill.c"
yy15:
	++in->cur;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case '\'': goto yy17;
		case '\\': goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel5;
				goto yy19;
			}
			goto yy11;
	}
yy17:
	yyaccept = 1;
	YYMARKER = ++in->cur;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case '\'': goto yy13;
		case '\\': goto yy15;
		default:
			if (in->lim <= in->cur) {
				if (YYFILL() == 0) goto yyFillLabel6;
				goto yy14;
			}
			goto yy11;
	}
yy18:
#line 53 "eof/eof_10_fill.re"
	{ return count; }
#line 221 "eof/eof_10_fill.c"
yy19:
	in->cur = YYMARKER;
	if (yyaccept == 0) {
		goto yy3;
	} else {
		goto yy14;
	}
}
#line 58 "eof/eof_10_fill.re"

}

int main()
{
    FILE *f = fopen("input.txt", "rb");
    if (!f) return 1;

    Input in;
    init(&in, f);
    printf("count: %d\n", lex(&in));

    fclose(f);
    return 0;
}
