/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt2 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt3 = NULL;
			yyt1 = yyt2 = yyt4 = YYCURSOR;
			goto yy4;
		default:
			yyt3 = NULL;
			yyt1 = yyt2 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy2:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[6] = yyt4;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[4] = yyt3;
	if (yyt3 != NULL) yypmatch[4] -= 2;
	yypmatch[7] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b':
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			goto yy8;
		default: goto yy7;
	}
yy4:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy4;
		default: goto yy2;
	}
yy6:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy7:
	switch (yych) {
		case 'a':
			yyt4 = YYCURSOR;
			goto yy6;
		case 'b':
			yyt2 = yyt4;
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			goto yy8;
		default:
			yyt3 = NULL;
			yyt2 = yyt4 = YYCURSOR;
			goto yy2;
	}
yy8:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'a': goto yy9;
		case 'b':
			yyt2 = yyt4;
			goto yy4;
		default:
			yyt2 = yyt4;
			goto yy2;
	}
yy9:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt2 = yyt4;
		goto yy2;
	} else {
		yyt3 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy9;
		case 'b':
			yyt3 = yyt4 = YYCURSOR;
			goto yy4;
		default:
			yyt3 = yyt4 = YYCURSOR;
			goto yy2;
	}
}

posix_captures/categorize/01.re:6:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/categorize/01.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/categorize/01.re:7:7: warning: unreachable rule (shadowed by rule at line 6) [-Wunreachable-rules]
