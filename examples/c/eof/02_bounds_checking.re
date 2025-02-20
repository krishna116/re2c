// re2c $INPUT -o $OUTPUT
#include <assert.h>
#include <stdlib.h>
#include <string.h>

/*!max:re2c*/

static int lex(const char *str, unsigned int len) {
    // Make a copy of the string with YYMAXFILL zeroes at the end.
    char *buf = (char*) malloc(len + YYMAXFILL);
    memcpy(buf, str, len);
    memset(buf + len, 0, YYMAXFILL);
    const char *YYCURSOR = buf, *YYLIMIT = buf + len + YYMAXFILL;
    int count = 0;
loop:
    /*!re2c
        re2c:api:style = free-form;
        re2c:define:YYCTYPE = char;
        re2c:define:YYFILL = "goto fail;";

        [\x00] {
            if (YYCURSOR + YYMAXFILL - 1 != YYLIMIT) goto fail;
            goto exit;
        }
        ['] ([^'\\] | [\\][^])* ['] { ++count; goto loop; }
        [ ]+                        { goto loop; }
        *                           { goto fail; }
    */
fail:
    count = -1;
exit:
    free(buf);
    return count;
}

#define TEST(s, r) assert(lex(s, sizeof(s) - 1) == r)
int main() {
    TEST("", 0);
    TEST("'qu\0tes' 'are' 'fine: \\'' ", 3);
    TEST("'unterminated\\'", -1);
    return 0;
}
