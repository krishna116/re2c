/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt1 = yyt2 = YYCURSOR;
		goto yy3;
	default:
		yyt2 = yyt3 = NULL;
		yyt1 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt2 = YYCURSOR;
		goto yy3;
	default:
		yyt3 = YYCURSOR;
		goto yy2;
	}
}

re2c: warning: line 2: rule matches empty string [-Wmatch-empty-string]
digraph NFA {
  rankdir=LR
  node[shape=Mrecord fontname=Courier height=0.2 width=0.2]
  edge[arrowhead=vee fontname=Courier label=" "]

  n9 [label="9(1)"]
  n9 -> n8 [label="/0&uarr;(1)"]
  n8 [label="8(1)"]
  n8 -> n5
  n8 -> n7 [color=lightgray]
  n7 [label="7(1)"]
  n7 -> n6 [label="/2&darr;(2)"]
  n6 [label="6(1)"]
  n6 -> n1 [label="/3&darr;(1)"]
  n5 [label="5(2)"]
  n5 -> n4 [label="/2&uarr;(2)"]
  n4 [label="4(1)"]
  n4 -> n3 [label="97"]
  n3 [label="3(1)"]
  n3 -> n2 [label="/3&uarr;(1)"]
  n2 [label="2(1)"]
  n2 -> n5
  n2 -> n1 [color=lightgray]
  n1 [label="1(2)"]
  n1 -> n0 [label="/1&uarr;(0)"]
  n0 [label="0(1)"] [fillcolor=gray]
}
