/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'X': goto yy3;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy4;
		case 'Y': goto yy6;
		default: goto yy5;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'Y': goto yy9;
		default: goto yy8;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy7;
		case 'Y': goto yy9;
		default: goto yy8;
	}
yy7:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x00: goto yy4;
		case 'Y': goto yy11;
		default: goto yy10;
	}
yy9:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy7;
		case 'Y': goto yy11;
		default: goto yy10;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'Y': goto yy14;
		default: goto yy13;
	}
yy11:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy7;
		case 'Y': goto yy14;
		default: goto yy12;
	}
yy12:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt5 = YYCURSOR - 1;
yy13:
	switch (yych) {
		case 0x00: goto yy4;
		case 'Y': goto yy15;
		default: goto yy12;
	}
yy14:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt4;
	yyt2 = yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy7;
		case 'Y': goto yy15;
		default: goto yy12;
	}
yy15:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = yyt5;
	yyt1 = yyt4;
	yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
		case 0x00: goto yy7;
		case 'Y': goto yy15;
		default: goto yy12;
	}
}

posix_captures/repetition/54_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
