/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax --stadfa

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 9) YYFILL(9);
	yych = *(YYMARKER = YYCURSOR);
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
	yyt5 = yyt7 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy5;
		case 'b': goto yy6;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt9 = yyt5;
	yyt8 = yyt5;
	yyt6 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy9;
		default: goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy10;
		default: goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt9 = yyt4;
	yyt1 = yyt6;
	yyt7 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy8;
	}
yy8:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = YYCURSOR;
	{}
yy9:
	yych = *++YYCURSOR;
	yyt6 = yyt9;
	yyt5 = yyt9;
	switch (yych) {
		case 'a': goto yy12;
		default: goto yy4;
	}
yy10:
	yych = *++YYCURSOR;
	yyt9 = yyt5;
	yyt8 = yyt5;
	yyt6 = yyt5;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt7;
	switch (yych) {
		case 'a': goto yy13;
		case 'b': goto yy9;
		default: goto yy4;
	}
yy11:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy14;
		default: goto yy8;
	}
yy12:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt9 = yyt4;
	yyt1 = yyt6;
	yyt7 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt6 = yyt8;
	yyt5 = yyt8;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy11;
		default: goto yy8;
	}
yy13:
	yych = *++YYCURSOR;
	yyt2 = yyt4;
	yyt9 = yyt5;
	yyt8 = yyt5;
	yyt1 = yyt6;
	yyt3 = yyt4 = YYCURSOR - 1;
	yyt6 = yyt5;
	switch (yych) {
		case 'a': goto yy7;
		case 'b': goto yy15;
		default: goto yy8;
	}
yy14:
	++YYCURSOR;
	yyt2 = yyt9;
	yyt1 = yyt7;
	goto yy8;
yy15:
	yych = *++YYCURSOR;
	yyt6 = yyt9;
	yyt5 = yyt9;
	switch (yych) {
		case 'a': goto yy12;
		default: goto yy8;
	}
}

posix_captures/glennfowler/32_stadfa.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
