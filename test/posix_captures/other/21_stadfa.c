/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
		case 'y': goto yy3;
		default:
			yyt1 = yyt2 = yyt3 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt3;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'y': goto yy4;
		default:
			yyt2 = YYCURSOR;
			goto yy2;
	}
yy4:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	yyt2 = YYCURSOR;
	goto yy2;
}

posix_captures/other/21_stadfa.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/21_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/21_stadfa.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
