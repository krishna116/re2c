/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --tags --stadfa

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy3;
		case 'b': goto yy5;
		default: goto yy2;
	}
yy2:
	{}
yy3:
	++YYCURSOR;
	yyt1 = NULL;
yy4:
	t = yyt1;
	{}
yy5:
	++YYCURSOR;
	yyt1 = YYCURSOR;
	goto yy4;
}

