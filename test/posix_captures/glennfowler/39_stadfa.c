/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
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
		case 0x00: goto yy4;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy10;
	}
yy5:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy13;
		default: goto yy11;
	}
yy6:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy10;
		case 'z': goto yy8;
		default: goto yy6;
	}
yy10:
	yynmatch = 2;
	yypmatch[0] = yypmatch[2] = yyt1;
	yypmatch[1] = yypmatch[3] = YYCURSOR;
	{}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'y': goto yy13;
		default: goto yy11;
	}
yy13:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 0x00: goto yy10;
		case 'y': goto yy13;
		default: goto yy11;
	}
}

posix_captures/glennfowler/39_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
