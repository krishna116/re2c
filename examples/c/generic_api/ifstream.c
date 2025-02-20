/* Generated by re2c */
#line 1 "c/generic_api/ifstream.re"
// re2c $INPUT -o $OUTPUT
#include <cassert>
#include <cstdio>
#include <fstream>
#include <sstream>

static void convert_newlines(std::ifstream &in, std::ostringstream &out) {
    std::streampos mar;
    for (;;) {
#line 13 "c/generic_api/ifstream.c"
{
	char yych;
	yych = in.peek();
	switch (yych) {
		case '\r': goto yy4;
		default: goto yy2;
	}
yy2:
	{ in.ignore(); if (in.eof()) return; }
yy3:
#line 19 "c/generic_api/ifstream.re"
	{ out.put(yych); continue; }
#line 26 "c/generic_api/ifstream.c"
yy4:
	{ in.ignore(); if (in.eof()) return; }
	yych = in.peek();
	switch (yych) {
		case '\n': goto yy5;
		default: goto yy3;
	}
yy5:
	{ in.ignore(); if (in.eof()) return; }
#line 20 "c/generic_api/ifstream.re"
	{ out.put('\n'); continue; }
#line 38 "c/generic_api/ifstream.c"
}
#line 21 "c/generic_api/ifstream.re"
}
}

int main() {
    const char *fname = "input";
    const char s1[] = "Text\r\nwith\r\nnewlines.\r\n\r\n";
    const char s2[] = "Text\nwith\nnewlines.\n\n";

    std::ofstream f(fname, std::ios::binary);
    f.write(s1, sizeof(s1) - 1);
    f.close();

    std::ifstream in(fname, std::ios::binary);
    std::ostringstream out;
    convert_newlines(in, out);
    assert(out.str() == s2);

    remove(fname);
    return 0;
}
