/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -cbi
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define	BSIZE	8192

enum ScanContition {
	EStateNormal,
	EStateComment,
	EStateSkiptoeol,
	EStateString,
};


typedef struct Scanner
{
	FILE			    *fp;
	unsigned char	    *cur, *tok, *lim, *eof;
	unsigned char 	    buffer[BSIZE];
	unsigned char       yych;
	enum ScanContition  cond;
	int                 state;
} Scanner;

int fill(Scanner *s, int len)
{
	if (!len)
	{
		s->cur = s->tok = s->lim = s->buffer;
		s->eof = 0;
	}
	if (!s->eof)
	{
		int got, cnt = s->tok - s->buffer;

		if (cnt > 0)
		{
			memcpy(s->buffer, s->tok, s->lim - s->tok);
			s->tok -= cnt;
			s->cur -= cnt;
			s->lim -= cnt;
		}
		cnt = BSIZE - cnt;
		if ((got = fread(s->lim, 1, cnt, s->fp)) != cnt)
		{
			s->eof = &s->lim[got];
		}
		s->lim += got;
	}
	else if (s->cur + len > s->eof)
	{
		return 0; /* not enough input data */
	}
	return -1;
}

void fputl(const char *s, size_t len, FILE *stream)
{
	while(len-- > 0)
	{
		fputc(*s++, stream);
	}
}

void scan(Scanner *s)
{
	fill(s, 0);

	for(;;)
	{
		s->tok = s->cur;

		if (s->cond < 2) {
			if (s->cond < 1) {
				goto yyc_Normal;
			} else {
				goto yyc_Comment;
			}
		} else {
			if (s->cond < 3) {
				goto yyc_Skiptoeol;
			} else {
				goto yyc_String;
			}
		}
/* *********************************** */
yyc_Normal:
		if ((s->lim - s->cur) < 4) if(fill(s, 4) >= 0) break;
		s->yych = *s->cur;
		if (s->yych <= '\'') {
			if (s->yych == '"') goto yy4;
			if (s->yych >= '\'') goto yy6;
		} else {
			if (s->yych <= '/') {
				if (s->yych >= '/') goto yy7;
			} else {
				if (s->yych == '?') goto yy8;
			}
		}
		++s->cur;
yy3:
		{
				fputc(*s->tok, stdout);
				continue;
			}
yy4:
		++s->cur;
		{
				fputc(*s->tok, stdout);
				s->state = EStateString;
				continue;
			}
yy6:
		s->yych = *(s->tok = ++s->cur);
		if (s->yych == '"') goto yy9;
		if (s->yych == '\\') goto yy11;
		goto yy3;
yy7:
		s->yych = *++s->cur;
		if (s->yych == '*') goto yy12;
		if (s->yych == '/') goto yy14;
		goto yy3;
yy8:
		s->yych = *(s->tok = ++s->cur);
		if (s->yych == '?') goto yy16;
		goto yy3;
yy9:
		s->yych = *++s->cur;
		if (s->yych == '\'') goto yy17;
yy10:
		s->cur = s->tok;
		goto yy3;
yy11:
		s->yych = *++s->cur;
		if (s->yych == '"') goto yy9;
		goto yy10;
yy12:
		++s->cur;
		{
				s->cond = EStateComment;
				goto yyc_Comment;
			}
yy14:
		++s->cur;
		{
				s->cond = EStateSkiptoeol;
				goto yyc_Skiptoeol;
			}
yy16:
		s->yych = *++s->cur;
		switch (s->yych) {
			case '!': goto yy19;
			case '\'': goto yy21;
			case '(': goto yy23;
			case ')': goto yy25;
			case '-': goto yy27;
			case '/': goto yy29;
			case '<': goto yy31;
			case '=': goto yy33;
			case '>': goto yy35;
			default: goto yy10;
		}
yy17:
		++s->cur;
		{
				fputl("'\"'", 3, stdout);
				continue;
			}
yy19:
		++s->cur;
		{
				fputc('|', stdout);
				continue;
			}
yy21:
		++s->cur;
		{
				fputc('^', stdout);
				continue;
			}
yy23:
		++s->cur;
		{
				fputc('[', stdout);
				continue;
			}
yy25:
		++s->cur;
		{
				fputc(']', stdout);
				continue;
			}
yy27:
		++s->cur;
		{
				fputc('~', stdout);
				continue;
			}
yy29:
		++s->cur;
		{
				fputc('\\', stdout);
				continue;
			}
yy31:
		++s->cur;
		{
				fputc('{', stdout);
				continue;
			}
yy33:
		++s->cur;
		{
				fputc('#', stdout);
				continue;
			}
yy35:
		++s->cur;
		{
				fputc('}', stdout);
				continue;
			}
/* *********************************** */
yyc_Comment:
		if ((s->lim - s->cur) < 2) if(fill(s, 2) >= 0) break;
		s->yych = *s->cur;
		if (s->yych == '*') goto yy41;
		++s->cur;
yy40:
		{
				goto yyc_Comment;
			}
yy41:
		s->yych = *++s->cur;
		if (s->yych != '/') goto yy40;
		++s->cur;
		{
				s->cond = EStateNormal;
				continue;
			}
/* *********************************** */
yyc_Skiptoeol:
		if ((s->lim - s->cur) < 5) if(fill(s, 5) >= 0) break;
		s->yych = *s->cur;
		if (s->yych <= '>') {
			if (s->yych == '\n') goto yy48;
		} else {
			if (s->yych <= '?') goto yy50;
			if (s->yych == '\\') goto yy51;
		}
		++s->cur;
yy47:
		{
				goto yyc_Skiptoeol;
			}
yy48:
		++s->cur;
		{
				s->cond = EStateNormal;
				continue;
			}
yy50:
		s->yych = *(s->tok = ++s->cur);
		if (s->yych == '?') goto yy52;
		goto yy47;
yy51:
		s->yych = *(s->tok = ++s->cur);
		if (s->yych == '\n') goto yy54;
		if (s->yych == '\r') goto yy56;
		goto yy47;
yy52:
		s->yych = *++s->cur;
		if (s->yych == '/') goto yy57;
yy53:
		s->cur = s->tok;
		goto yy47;
yy54:
		++s->cur;
		{
				goto yyc_Skiptoeol;
			}
yy56:
		s->yych = *++s->cur;
		if (s->yych == '\n') goto yy54;
		goto yy53;
yy57:
		s->yych = *++s->cur;
		if (s->yych == '\n') goto yy58;
		if (s->yych == '\r') goto yy60;
		goto yy53;
yy58:
		++s->cur;
		{
				goto yyc_Skiptoeol;
			}
yy60:
		s->yych = *++s->cur;
		if (s->yych == '\n') goto yy58;
		goto yy53;
/* *********************************** */
yyc_String:
		if ((s->lim - s->cur) < 2) if(fill(s, 2) >= 0) break;
		s->yych = *s->cur;
		if (s->yych == '"') goto yy65;
		if (s->yych == '\\') goto yy67;
		++s->cur;
yy64:
		{
				fputc(*s->tok, stdout);
				continue;
			}
yy65:
		++s->cur;
		{
				fputc(*s->tok, stdout);
				s->cond = EStateNormal;
				continue;
			}
yy67:
		s->yych = *++s->cur;
		if (s->yych == '\n') goto yy64;
		++s->cur;
		{
				fputl((const char*)s->tok, 2, stdout);
				continue;
			}

	}
}

int main(int argc, char **argv)
{
	Scanner in;
	char c;

	if (argc != 2)
	{
		fprintf(stderr, "%s <file>\n", argv[0]);
		return 1;;
	}

	memset((char*) &in, 0, sizeof(in));

	if (!strcmp(argv[1], "-"))
	{
		in.fp = stdin;
	}
	else if ((in.fp = fopen(argv[1], "r")) == NULL)
	{
		fprintf(stderr, "Cannot open file '%s'\n", argv[1]);
		return 1;
	}

 	in.cond = EStateNormal;
 	scan(&in);

	if (in.fp != stdin)
	{
		fclose(in.fp);
	}
	return 0;
}
