/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --posix-captures --dump-dfa-raw --fixed-tags toplevel

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

debug/dfa_raw.re:3:11: warning: rule matches empty string [-Wmatch-empty-string]
digraph DFA {
  rankdir=LR
  node[shape=plaintext fontname=Courier]
  edge[arrowhead=vee fontname=Courier]

  0 [label=<<TABLE BORDER="0" CELLBORDER="1"><TR><TD ALIGN="left" PORT="0">0 1 2 3 4 /0&uarr; 2&darr; 3&darr; 1&uarr; </TD></TR><TR><TD ALIGN="left" PORT="1">4 1 2 3 4 /0&uarr; 2&uarr; </TD></TR></TABLE>>]
  void [shape=point]
  void -> 0:0:w [style=dotted label=""]
  void -> 0:1:w [style=dotted label=""]
  r0 [shape=none label="(5 0 6 7)"]
  0:0:e -> r0 [style=dotted label="/7&darr; 6&darr; 5&uarr; "]
  1 [label=<<TABLE BORDER="0" CELLBORDER="1"><TR><TD ALIGN="left" PORT="0">0 8 2 9 4 /3&uarr; 1&uarr; </TD></TR><TR><TD ALIGN="left" PORT="1">4 8 2 9 4 /3&uarr; 2&uarr; </TD></TR></TABLE>>]
  0:1:e -> 1:0:w [label="1/8&uarr; 9&uarr; "]
  0:1:e -> 1:1:w [label="1/8&uarr; 9&uarr; "]
  r1 [shape=none label="(5 0 6 7)"]
  1:0:e -> r1 [style=dotted label="/6=9 5=8 7&uarr; "]
  i1 [label=<<TABLE BORDER="0" CELLBORDER="1"><TR><TD ALIGN="left" PORT="0" STYLE="dotted">0 8 2 10 11 /3&uarr; 1&uarr; </TD></TR><TR><TD ALIGN="left" PORT="1" STYLE="dotted">4 8 2 10 11 /3&uarr; 2&uarr; </TD></TR></TABLE>>]
  i1 [style=dotted]
  i1:s -> 1:s [style=dotted label="/9&uarr; "]
  1:1:e -> i1:0:w [label="1/10&uarr; 11&uarr; "]
  1:1:e -> i1:1:w [label="1/10&uarr; 11&uarr; "]
  r1 [shape=none label="(5 0 6 7)"]
  1:0:e -> r1 [style=dotted label="/6=9 5=8 7&uarr; "]
}
