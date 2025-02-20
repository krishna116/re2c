// Code generated by re2c, DO NOT EDIT.
//go:generate re2go $INPUT -o $OUTPUT --loop-switch -i
package main

import (
	"errors"
	"testing"
)

var (
	eSyntax   = errors.New("syntax error")
	eOverflow = errors.New("overflow error")
)

const u32Limit uint64 = 1<<32

func parse_u32(str string) (uint32, error) {
	var cursor, marker int
	result := uint64(0)

	add_digit := func(base uint64, offset byte) {
		result = result * base + uint64(str[cursor-1] - offset)
		if result >= u32Limit {
			result = u32Limit
		}
	}

	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case '0':
				yystate = 3
				continue
			case '1','2','3','4','5','6','7','8','9':
				yystate = 5
				continue
			default:
				yystate = 1
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			{ goto err }
		case 3:
			marker = cursor
			yych = str[cursor]
			switch (yych) {
			case 'B':
				fallthrough
			case 'b':
				cursor += 1
				yystate = 7
				continue
			case 'X':
				fallthrough
			case 'x':
				cursor += 1
				yystate = 9
				continue
			default:
				yystate = 4
				continue
			}
		case 4:
			{ goto oct }
		case 5:
			yystate = 6
			continue
		case 6:
			cursor += -1
			{ goto dec }
		case 7:
			yych = str[cursor]
			switch (yych) {
			case '0','1':
				cursor += 1
				yystate = 10
				continue
			default:
				yystate = 8
				continue
			}
		case 8:
			cursor = marker
			yystate = 4
			continue
		case 9:
			yych = str[cursor]
			switch (yych) {
			case '0','1','2','3','4','5','6','7','8','9':
				fallthrough
			case 'A','B','C','D','E','F':
				fallthrough
			case 'a','b','c','d','e','f':
				cursor += 1
				yystate = 12
				continue
			default:
				yystate = 8
				continue
			}
		case 10:
			yystate = 11
			continue
		case 11:
			cursor += -1
			{ goto bin }
		case 12:
			yystate = 13
			continue
		case 13:
			cursor += -1
			{ goto hex }
		default:
			panic("internal lexer error")
		}
	}
}

bin:
	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue
			case '0','1':
				yystate = 5
				continue
			default:
				yystate = 3
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			{ goto end }
		case 3:
			yystate = 4
			continue
		case 4:
			{ goto err }
		case 5:
			yystate = 6
			continue
		case 6:
			{ add_digit(2, '0'); goto bin }
		default:
			panic("internal lexer error")
		}
	}
}

oct:
	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue
			case '0','1','2','3','4','5','6','7':
				yystate = 5
				continue
			default:
				yystate = 3
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			{ goto end }
		case 3:
			yystate = 4
			continue
		case 4:
			{ goto err }
		case 5:
			yystate = 6
			continue
		case 6:
			{ add_digit(8, '0'); goto oct }
		default:
			panic("internal lexer error")
		}
	}
}

dec:
	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue
			case '0','1','2','3','4','5','6','7','8','9':
				yystate = 5
				continue
			default:
				yystate = 3
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			{ goto end }
		case 3:
			yystate = 4
			continue
		case 4:
			{ goto err }
		case 5:
			yystate = 6
			continue
		case 6:
			{ add_digit(10, '0'); goto dec }
		default:
			panic("internal lexer error")
		}
	}
}

hex:
	
{
	var yych byte
	yystate := 0
	for {
		switch (yystate) {
		case 0:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 1
				continue
			case '0','1','2','3','4','5','6','7','8','9':
				yystate = 5
				continue
			case 'A','B','C','D','E','F':
				yystate = 7
				continue
			case 'a','b','c','d','e','f':
				yystate = 9
				continue
			default:
				yystate = 3
				continue
			}
		case 1:
			yystate = 2
			continue
		case 2:
			{ goto end }
		case 3:
			yystate = 4
			continue
		case 4:
			{ goto err }
		case 5:
			yystate = 6
			continue
		case 6:
			{ add_digit(16, '0');    goto hex }
		case 7:
			yystate = 8
			continue
		case 8:
			{ add_digit(16, 'A'-10); goto hex }
		case 9:
			yystate = 10
			continue
		case 10:
			{ add_digit(16, 'a'-10); goto hex }
		default:
			panic("internal lexer error")
		}
	}
}

end:
	if result < u32Limit {
		return uint32(result), nil
	} else {
		return 0, eOverflow
	}
err:
	return 0, eSyntax
}

func TestLex(t *testing.T) {
	var tests = []struct {
		num uint32
		str string
		err error
	}{
		{1234567890, "1234567890\000", nil},
		{13, "0b1101\000", nil},
		{0x7fe, "0x007Fe\000", nil},
		{0644, "0644\000", nil},
		{0, "9999999999\000", eOverflow},
		{0, "123??\000", eSyntax},
	}

	for _, x := range tests {
		t.Run(x.str, func(t *testing.T) {
			num, err := parse_u32(x.str)
			if !(num == x.num && err == x.err) {
				t.Errorf("got %d, want %d", num, x.num)
			}
		})
	}
}
