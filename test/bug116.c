/* Generated by re2c */
#line 1 "bug116.re"
// re2c $INPUT -o $OUTPUT 

#line 6 "bug116.c"
{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		default: goto yy2;
	}
yy2:
yy3:
	++YYCURSOR;
	YYCURSOR -= 1;
#line 3 "bug116.re"
	{}
#line 21 "bug116.c"
}
#line 4 "bug116.re"

bug116.re:2:0: warning: control flow is undefined for strings that match '[\x0-\x60\x62-\xFF]', use default rule '*' [-Wundefined-control-flow]
