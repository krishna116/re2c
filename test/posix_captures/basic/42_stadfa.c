/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
		case 'b':
		case 'c': goto yy3;
		case 'd': goto yy5;
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
		case 'a':
		case 'b':
		case 'c': goto yy7;
		case 'd': goto yy9;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt2 = NULL;
	yyt1 = YYCURSOR - 1;
yy6:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = yyt2;
	if (yyt2 != NULL) yypmatch[2] -= 1;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
		case 'b':
		case 'c': goto yy7;
		case 'd': goto yy9;
		default: goto yy4;
	}
yy9:
	++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	goto yy6;
}

posix_captures/basic/42_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
