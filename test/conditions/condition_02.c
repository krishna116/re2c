/* Generated by re2c */
#line 1 "conditions/condition_02.re"
// re2c $INPUT -o $OUTPUT -c

#line 6 "conditions/condition_02.c"
{
	YYCTYPE yych;
	switch (YYGETCONDITION()) {
		case yyc0: goto yyc_0;
		case yycr1: goto yyc_r1;
		case yycr2: goto yyc_r2;
	}
/* *********************************** */
yyc_0:
#line 4 "conditions/condition_02.re"
	{ return NULL; }
#line 18 "conditions/condition_02.c"
/* *********************************** */
yyc_r1:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy6;
		case 'b': goto yy8;
		default: goto yy5;
	}
yy5:
yy6:
	++YYCURSOR;
#line 5 "conditions/condition_02.re"
	{ return "a"; }
#line 33 "conditions/condition_02.c"
yy8:
	++YYCURSOR;
#line 6 "conditions/condition_02.re"
	{ return "b"; }
#line 38 "conditions/condition_02.c"
/* *********************************** */
yyc_r2:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'b': goto yy13;
		default: goto yy12;
	}
yy12:
yy13:
	++YYCURSOR;
#line 6 "conditions/condition_02.re"
	{ return "b"; }
#line 52 "conditions/condition_02.c"
}
#line 8 "conditions/condition_02.re"

conditions/condition_02.re:2:0: warning: control flow in condition 'r1' is undefined for strings that match '[\x0-\x60\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
conditions/condition_02.re:2:0: warning: control flow in condition 'r2' is undefined for strings that match '[\x0-\x61\x63-\xFF]', use default rule '*' [-Wundefined-control-flow]
