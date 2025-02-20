/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -if
// This test is for `getstate:re2c` without a list of blocks.

// global `getstate:re2c` (should include x, y, z with start in x)
switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
}


// global block w (no rules)


// global `getstate:re2c` (should include x, y, z with start in x)
switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
}


// global block x (with start label)


yy0:
	YYSETSTATE(0);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel0:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ x }


// global `getstate:re2c` (should include x, y, z with start in x)
switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
}


// global block y (no start label)


	YYSETSTATE(1);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel1:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ y }


// global `getstate:re2c` (should include x, y, z with start in x)
switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
}


// local block z (no start label)


	YYSETSTATE(2);
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
yyFillLabel2:
	yych = *YYCURSOR++;
	YYSETSTATE(-1);
	{ z }


// global `getstate:re2c` (should include x, y, z with start in x)
switch (YYGETSTATE()) {
	default: goto yy0;
	case 0: goto yyFillLabel0;
	case 1: goto yyFillLabel1;
	case 2: goto yyFillLabel2;
}

