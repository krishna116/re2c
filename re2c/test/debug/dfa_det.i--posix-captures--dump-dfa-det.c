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
digraph DFA {
  rankdir=LR
  node[shape=Mrecord fontname=Courier]
  edge[arrowhead=vee fontname=Courier]

  n [shape=point]  n -> n0 [style=dotted label=""]
  n0 [height=0.2 width=0.2 label="0"]
subgraph { rank=same n0 [style=filled fillcolor=lightgray] dr0 [shape=none label="/7&darr; 6&darr; 5&uarr; (5 0 6 7)"] n0:s -> dr0:n [style=dotted minlen=0]}
  n0 -> n1 [label="1/9&uarr; 8&uarr; "]
  n1 [height=0.2 width=0.2 label="1"]
subgraph { rank=same n1 [style=filled fillcolor=lightgray] dr1 [shape=none label="/6=9 5=8 7&uarr; (5 0 6 7)"] n1:s -> dr1:n [style=dotted minlen=0]}
  n1 -> n1 [label="1/9&uarr; "]
}
