/* Generated by re2c */
#line 1 "bug46_infinite_loop.re"
// re2c $INPUT -o $OUTPUT 
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    char* YYCURSOR = argv[1];
    char* YYLIMIT  = YYCURSOR + strlen(YYCURSOR);
    #define YYFILL(n) do { } while(0)


#line 15 "bug46_infinite_loop.c"
{
	unsigned char yych;
#line 14 "bug46_infinite_loop.re"
	{ }
#line 20 "bug46_infinite_loop.c"
}
#line 15 "bug46_infinite_loop.re"


/* BUG BEGINS HERE */

#line 27 "bug46_infinite_loop.c"
{
	unsigned char yych;
	goto yy3;
yy4:
	++YYCURSOR;
yy3:
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
		case 'a': goto yy7;
		case 'b':
		case 'c': goto yy6;
		default: goto yy4;
	}
yy6:
#line 19 "bug46_infinite_loop.re"
	{ printf("exit 0\n"); return 0; }
#line 45 "bug46_infinite_loop.c"
yy7:
	++YYCURSOR;
	goto yy6;
}
#line 20 "bug46_infinite_loop.re"


    printf("exit 1\n");
    return 0;
}
bug46_infinite_loop.re:19:13: warning: rule matches empty string [-Wmatch-empty-string]
