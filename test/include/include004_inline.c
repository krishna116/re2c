/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --depfile $DEPFILE

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case '1': goto yy4;
		case '2': goto yy6;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{ return -1; }
yy4:
	++YYCURSOR;
	{ return 1; }
yy6:
	++YYCURSOR;
	{ return 4; }
}

include/include004_inline.c: include/include004_inline.re include/include004_inline.re.inc
include/include004_inline.re.inc:1:4: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
include/include004_inline.re:12:8: warning: unreachable rule (shadowed by rule at line 2) [-Wunreachable-rules]
