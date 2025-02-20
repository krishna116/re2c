/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i
// Normally re2c generates one 'yyaccept' value for each rule
// that is shadowed by a longer rule.
// However, if two different accepting states accept the same
// rule, but their epsilon-transitions to this rule have
// different sets of tags, re2c should split 'yyaccept' value.


{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{}
yy4:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	YYCTXMARKER = YYCURSOR;
	switch (yych) {
		case 'b': goto yy6;
		default: goto yy5;
	}
yy5:
	YYCURSOR = YYCTXMARKER;
	{}
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'c': goto yy8;
		default: goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		YYCTXMARKER = YYCURSOR;
		goto yy5;
	} else {
		goto yy5;
	}
yy8:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'd': goto yy9;
		default: goto yy5;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
		case 'e': goto yy10;
		default: goto yy7;
	}
yy10:
	++YYCURSOR;
	{}
}

