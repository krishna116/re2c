/* Generated by re2c */
#line 1 "bug1390174.re"
// re2c $INPUT -o $OUTPUT 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET(n) return n

int scan(const char *s, int l) {
const char *p = s;
const char *q;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)

#line 20 "bug1390174.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy4;
		case 'A':
		case 'a': goto yy6;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 20 "bug1390174.re"
	{RET(0);}
#line 36 "bug1390174.c"
yy4:
	++YYCURSOR;
#line 19 "bug1390174.re"
	{RET(1);}
#line 41 "bug1390174.c"
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case '\n': goto yy4;
		case 'A':
		case 'a': goto yy7;
		default: goto yy3;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy4;
		case 'A':
		case 'a': goto yy7;
		default: goto yy9;
	}
yy9:
	YYCURSOR = YYMARKER;
	goto yy3;
}
#line 21 "bug1390174.re"

}

void _do_scan(int exp, const char * str, int len)
{
	int ret = scan(str, len);
	
	printf("%d %s %d\n", exp, exp == ret ? "==" : "!=", ret);
}

#define do_scan(exp, str) _do_scan(exp, str, sizeof(str) - 1)

main()
{
	do_scan(1, "a\n");
	do_scan(1, "aa\n");
	do_scan(1, "aaa\n");
	do_scan(1, "aaaa\n");
	do_scan(1, "\n");

	do_scan(0, "q");
	do_scan(0, "a");
}
