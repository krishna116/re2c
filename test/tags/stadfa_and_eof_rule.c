/* Generated by re2c */
// re2c $INPUT -o $OUTPUT --stadfa --tags -i


{
	YYCTYPE yych;
yyFillLabel0:
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
		case '\n': goto yy3;
		case 'a': goto yy5;
		case 'b': goto yy8;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel0;
				goto yy14;
			}
			goto yy2;
	}
yy2:
	{ return 1; }
yy3:
	++YYCURSOR;
	yyt1 = yyt2 = NULL;
yy4:
	x = yyt1;
	y = yyt2;
	{}
yy5:
	++YYCURSOR;
yyFillLabel1:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy3;
		case 'a': goto yy5;
		case 'b': goto yy8;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel1;
			}
			goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy2;
yy8:
	++YYCURSOR;
yyFillLabel2:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy9;
		case 'a': goto yy10;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel2;
			}
			goto yy7;
	}
yy9:
	++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	goto yy4;
yy10:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
yyFillLabel3:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy11;
		case 'a': goto yy12;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel3;
			}
			goto yy7;
	}
yy11:
	++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	goto yy4;
yy12:
	++YYCURSOR;
yyFillLabel4:
	yych = *YYCURSOR;
	switch (yych) {
		case '\n': goto yy11;
		case 'a': goto yy12;
		default:
			if (YYLIMIT <= YYCURSOR) {
				if (YYFILL() == 0) goto yyFillLabel4;
			}
			goto yy7;
	}
yy14:
	{ return 0; }
}

