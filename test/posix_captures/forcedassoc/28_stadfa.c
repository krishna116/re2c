/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
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
		case 'b': goto yy5;
		default:
			yyt2 = YYCURSOR;
			goto yy4;
	}
yy4:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = YYCURSOR;
	{}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		default:
			yyt2 = YYCURSOR;
			goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy4;
	}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy7;
		default: goto yy4;
	}
}

posix_captures/forcedassoc/28_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
