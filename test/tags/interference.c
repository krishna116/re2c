/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags
// shows the neccesity of tracking interference induced by copy commands


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case 'a': goto yy3;
		case 'b':
			yyt3 = yyt4 = YYCURSOR;
			goto yy5;
		default:
			yyt1 = yyt2 = NULL;
			goto yy2;
	}
yy2:
	p = yyt1;
	q = yyt2;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b':
			yyt3 = NULL;
			yyt4 = YYCURSOR;
			goto yy5;
		default: goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		yyt1 = yyt2 = NULL;
		goto yy2;
	} else {
		goto yy2;
	}
yy5:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		default: goto yy4;
	}
yy6:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a':
			yyt1 = yyt3;
			yyt2 = yyt4;
			goto yy3;
		case 'b':
			yyt1 = yyt3;
			yyt2 = yyt4;
			yyt3 = yyt4 = YYCURSOR;
			goto yy5;
		default:
			yyt1 = yyt3;
			yyt2 = yyt4;
			goto yy2;
	}
}

tags/interference.re:6:22: warning: rule matches empty string [-Wmatch-empty-string]
