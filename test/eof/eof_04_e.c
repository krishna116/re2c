/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -ie
#include <stdio.h>
#include <stdint.h>
#include <string.h>

static const size_t SIZE = 4096;

struct input_t {
    uint8_t buf[SIZE + 1];
    uint8_t *lim;
    uint8_t *cur;
    uint8_t *mar;
    uint8_t *tok;
    bool eof;

    input_t()
        : buf()
        , lim(buf + SIZE)
        , cur(lim)
        , mar(lim)
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
        mar -= free;
        tok -= free;
        lim += fread(lim, sizeof(uint8_t), free, stdin);
        lim[0] = 255;
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
	uint8_t yych;
yyFillLabel0:
	yych = *in.cur;
	switch (yych) {
		case 0x25: goto yy5;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel0;
				goto yy8;
			}
			goto yy2;
	}
yy2:
	++in.cur;
yyFillLabel1:
	yych = *in.cur;
	switch (yych) {
		case 0x25: goto yy4;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel1;
				goto yy4;
			}
			goto yy2;
	}
yy4:
	{ ++count; continue; }
yy5:
	++in.cur;
yyFillLabel2:
	yych = *in.cur;
	switch (yych) {
		case 0x25: goto yy5;
		default:
			if (in.lim <= in.cur) {
				if (in.fill() == 0) goto yyFillLabel2;
			}
			goto yy7;
	}
yy7:
	{ continue; }
yy8:
	{ return true; }
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
