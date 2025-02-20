/* Generated by re2c */
#line 1 "cvsignore_u.re"
// re2c $INPUT -o $OUTPUT -u

#define YYFILL(n) if (cursor >= limit) break;
#define YYCTYPE unsigned int
#define YYCURSOR cursor
#define YYLIMIT limit
#define YYMARKER marker

#line 17 "cvsignore_u.re"


#define APPEND(text) \
	append(output, outsize, text, sizeof(text) - sizeof(YYCTYPE))

inline void append(YYCTYPE *output, size_t & outsize, const YYCTYPE * text, size_t len)
{
	memcpy(output + outsize, text, len);
	outsize += (len / sizeof(YYCTYPE));
}

void scan(YYCTYPE *pText, size_t *pSize, int *pbChanged)
{
	// rule
	// scan lines
	// find $ in lines
	//   compact $<keyword>: .. $ to $<keyword>$
  
	YYCTYPE *output;
	const YYCTYPE *cursor, *limit, *marker;

	cursor = marker = output = *pText;

	size_t insize = *pSize;
	size_t outsize = 0;

	limit = cursor + insize;

	while(1) {
loop:

#line 44 "cvsignore_u.c"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	if (yych == '$') goto yy4;
	++YYCURSOR;
yy3:
#line 54 "cvsignore_u.re"
	{ output[outsize++] = cursor[-1]; if (cursor >= limit) break; goto loop; }
#line 54 "cvsignore_u.c"
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 'D': goto yy5;
		case 'I': goto yy7;
		case 'L': goto yy8;
		case 'R': goto yy9;
		case 'S': goto yy10;
		default: goto yy3;
	}
yy5:
	yych = *++YYCURSOR;
	if (yych == 'a') goto yy11;
yy6:
	YYCURSOR = YYMARKER;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	if (yych == 'd') goto yy12;
	goto yy6;
yy8:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy13;
	goto yy6;
yy9:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy14;
	goto yy6;
yy10:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy15;
	goto yy6;
yy11:
	yych = *++YYCURSOR;
	if (yych == 't') goto yy16;
	goto yy6;
yy12:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy17;
	if (yych == ':') goto yy19;
	goto yy6;
yy13:
	yych = *++YYCURSOR;
	if (yych == 'g') goto yy20;
	goto yy6;
yy14:
	yych = *++YYCURSOR;
	if (yych == 'v') goto yy21;
	goto yy6;
yy15:
	yych = *++YYCURSOR;
	if (yych == 'u') goto yy22;
	goto yy6;
yy16:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy23;
	goto yy6;
yy17:
	++YYCURSOR;
#line 50 "cvsignore_u.re"
	{ APPEND(L"$" L"Id$"); goto loop; }
#line 116 "cvsignore_u.c"
yy19:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy6;
	goto yy25;
yy20:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy26;
	if (yych == ':') goto yy28;
	goto yy6;
yy21:
	yych = *++YYCURSOR;
	if (yych == 'i') goto yy29;
	goto yy6;
yy22:
	yych = *++YYCURSOR;
	if (yych == 'r') goto yy30;
	goto yy6;
yy23:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy31;
	if (yych == ':') goto yy33;
	goto yy6;
yy24:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy25:
	if (yych == '\n') goto yy6;
	if (yych == '$') goto yy17;
	goto yy24;
yy26:
	++YYCURSOR;
#line 51 "cvsignore_u.re"
	{ APPEND(L"$" L"Log$"); goto loop; }
#line 151 "cvsignore_u.c"
yy28:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy6;
	goto yy35;
yy29:
	yych = *++YYCURSOR;
	if (yych == 's') goto yy36;
	goto yy6;
yy30:
	yych = *++YYCURSOR;
	if (yych == 'c') goto yy37;
	goto yy6;
yy31:
	++YYCURSOR;
#line 49 "cvsignore_u.re"
	{ APPEND(L"$" L"Date$"); goto loop; }
#line 168 "cvsignore_u.c"
yy33:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy6;
	goto yy39;
yy34:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy35:
	if (yych == '\n') goto yy6;
	if (yych == '$') goto yy26;
	goto yy34;
yy36:
	yych = *++YYCURSOR;
	if (yych == 'i') goto yy40;
	goto yy6;
yy37:
	yych = *++YYCURSOR;
	if (yych == 'e') goto yy41;
	goto yy6;
yy38:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy39:
	if (yych == '\n') goto yy6;
	if (yych == '$') goto yy31;
	goto yy38;
yy40:
	yych = *++YYCURSOR;
	if (yych == 'o') goto yy42;
	goto yy6;
yy41:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy43;
	if (yych == ':') goto yy45;
	goto yy6;
yy42:
	yych = *++YYCURSOR;
	if (yych == 'n') goto yy46;
	goto yy6;
yy43:
	++YYCURSOR;
#line 53 "cvsignore_u.re"
	{ APPEND(L"$" L"Source$"); goto loop; }
#line 214 "cvsignore_u.c"
yy45:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy6;
	goto yy48;
yy46:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy49;
	if (yych == ':') goto yy51;
	goto yy6;
yy47:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy48:
	if (yych == '\n') goto yy6;
	if (yych == '$') goto yy43;
	goto yy47;
yy49:
	++YYCURSOR;
#line 52 "cvsignore_u.re"
	{ APPEND(L"$" L"Revision$"); goto loop; }
#line 236 "cvsignore_u.c"
yy51:
	yych = *++YYCURSOR;
	if (yych == '$') goto yy6;
	goto yy53;
yy52:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy53:
	if (yych == '\n') goto yy6;
	if (yych == '$') goto yy49;
	goto yy52;
}
#line 56 "cvsignore_u.re"

	}
	output[outsize] = '\0';

	// set the new size
	*pSize = outsize;
	
	*pbChanged = (insize == outsize) ? 0 : 1;
}
