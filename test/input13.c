/* Generated by re2c */
#line 1 "input13.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "input13.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy4;
		case 'b': goto yy6;
		case 'c': goto yy8;
		case 'd': goto yy10;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
#line 13 "input13.re"
	{ return '\0'; }
#line 22 "input13.c"
yy4:
	++YYCURSOR;
#line 9 "input13.re"
	{ return 'a'; }
#line 27 "input13.c"
yy6:
	++YYCURSOR;
#line 10 "input13.re"
	{ return 'b'; }
#line 32 "input13.c"
yy8:
	++YYCURSOR;
#line 11 "input13.re"
	{ return 'c'; }
#line 37 "input13.c"
yy10:
	++YYCURSOR;
#line 12 "input13.re"
	{ return 'd'; }
#line 42 "input13.c"
}
#line 15 "input13.re"

