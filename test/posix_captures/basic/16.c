/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a':
			yyt1 = YYCURSOR;
			goto yy3;
		case 'b':
			yyt1 = YYCURSOR;
			goto yy5;
		default: goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy7;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy8;
		default: goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy8;
		default: goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy9;
		default: goto yy4;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy10;
		default: goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'a': goto yy10;
		case 'b': goto yy11;
		default: goto yy4;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'b': goto yy11;
		default: goto yy4;
	}
yy11:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[2] = YYCURSOR - 4;
	yypmatch[3] = YYCURSOR - 2;
	{}
}

posix_captures/basic/16.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
