/* Generated by re2c */
#line 1 "encodings/unicode_group_Me_8_encoding_policy_fail.re"
// re2c $INPUT -o $OUTPUT -8 --encoding-policy fail
#include <stdio.h>
#include "utf8.h"
#define YYCTYPE unsigned char
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
Me:
	
#line 14 "encodings/unicode_group_Me_8_encoding_policy_fail.c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	switch (yych) {
		case 0xD2: goto yy4;
		case 0xE1: goto yy5;
		case 0xE2: goto yy6;
		case 0xEA: goto yy7;
		default: goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
#line 14 "encodings/unicode_group_Me_8_encoding_policy_fail.re"
	{ return YYCURSOR == limit; }
#line 30 "encodings/unicode_group_Me_8_encoding_policy_fail.c"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x88:
		case 0x89: goto yy8;
		default: goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0xAA: goto yy10;
		default: goto yy3;
	}
yy6:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x83: goto yy12;
		default: goto yy3;
	}
yy7:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
		case 0x99: goto yy13;
		default: goto yy3;
	}
yy8:
	++YYCURSOR;
#line 13 "encodings/unicode_group_Me_8_encoding_policy_fail.re"
	{ goto Me; }
#line 60 "encodings/unicode_group_Me_8_encoding_policy_fail.c"
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xBE: goto yy8;
		default: goto yy11;
	}
yy11:
	YYCURSOR = YYMARKER;
	goto yy3;
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0x9D:
		case 0x9E:
		case 0x9F:
		case 0xA0:
		case 0xA2:
		case 0xA3:
		case 0xA4: goto yy8;
		default: goto yy11;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
		case 0xB0:
		case 0xB1:
		case 0xB2: goto yy8;
		default: goto yy11;
	}
}
#line 15 "encodings/unicode_group_Me_8_encoding_policy_fail.re"

}
static const unsigned int chars_Me [] = {0x488,0x489,  0x1abe,0x1abe,  0x20dd,0x20e0,  0x20e2,0x20e4,  0xa670,0xa672,  0x0,0x0};
static unsigned int encode_utf8 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count - 2; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
			s += re2c::utf8::rune_to_bytes (s, j);
	re2c::utf8::rune_to_bytes (s, ranges[ranges_count - 1]);
	return s - s_start + 1;
}

int main ()
{
	unsigned int * buffer_Me = new unsigned int [56];
	YYCTYPE * s = (YYCTYPE *) buffer_Me;
	unsigned int buffer_len = encode_utf8 (chars_Me, sizeof (chars_Me) / sizeof (unsigned int), buffer_Me);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_Me[i];
	if (!scan (s, s + buffer_len))
		printf("test 'Me' failed\n");
	delete [] buffer_Me;
	return 0;
}
