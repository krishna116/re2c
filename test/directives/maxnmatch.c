/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures
// Test `maxnmatch:re2c` directive (global or with block list).

// maxnmatch:re2c (expect 4)
#define YYMAXNMATCH 4


// maxnmatch:re2c:x1 (expect 1)
#define YYMAXNMATCH 1


// maxnmatch:re2c:x1:y2 (expect 2)
#define YYMAXNMATCH 2


// maxnmatch:re2c:y2:z4 (expect 4)
#define YYMAXNMATCH 4


// maxnmatch:re2c:z4:x1 (expect 4)
#define YYMAXNMATCH 4


// maxnmatch:re2c:x1:y2:z4 (expect 4)
#define YYMAXNMATCH 4



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
	{ x }
yy4:
	++YYCURSOR;
	yynmatch = 1;
	yypmatch[0] = YYCURSOR - 1;
	yypmatch[1] = YYCURSOR;
	{ a }
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy10;
		default: goto yy8;
	}
yy8:
	++YYCURSOR;
	{ y }
yy10:
	++YYCURSOR;
	yynmatch = 2;
	yypmatch[0] = yypmatch[2] = YYCURSOR - 1;
	yypmatch[1] = yypmatch[3] = YYCURSOR;
	{ b }
}



{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'c': goto yy16;
		default: goto yy14;
	}
yy14:
	++YYCURSOR;
	{ z }
yy16:
	++YYCURSOR;
	yynmatch = 4;
	yypmatch[0] = yypmatch[2] = yypmatch[4] = yypmatch[6] = YYCURSOR - 1;
	yypmatch[1] = yypmatch[3] = yypmatch[5] = yypmatch[7] = YYCURSOR;
	{ c }
}


