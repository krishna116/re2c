/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy9;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy6:
	yynmatch = 1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy9;
		default: goto yy4;
	}
yy9:
	++YYCURSOR;
	goto yy6;
}

posix_captures/basic/25_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
