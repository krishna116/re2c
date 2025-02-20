// Code generated by re2c, DO NOT EDIT.
//go:generate re2go -c $INPUT -o $OUTPUT --loop-switch -i
package main

import (
	"errors"
	"testing"
)

var (
	eSyntax   = errors.New("syntax error")
	eOverflow = errors.New("overflow error")
)

const (
	yycinit = 0
	yycbin = 14
	yycdec = 21
	yychex = 28
	yycoct = 39
)


const u32Limit uint64 = 1<<32

func parse_u32(str string) (uint32, error) {
	var cursor, marker int
	result := uint64(0)
	cond := yycinit

	add_digit := func(base uint64, offset byte) {
		result = result * base + uint64(str[cursor-1] - offset)
		if result >= u32Limit {
			result = u32Limit
		}
	}

loop:
	
{
	var yych byte
	yystate := cond
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
			{ return 0, eSyntax }
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
			cond = yycoct
			yystate = yycoct
			continue
		case 5:
			yystate = 6
			continue
		case 6:
			cursor += -1
			cond = yycdec
			yystate = yycdec
			continue
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
			cond = yycbin
			yystate = yycbin
			continue
		case 12:
			yystate = 13
			continue
		case 13:
			cursor += -1
			cond = yychex
			yystate = yychex
			continue
		case 14:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 15
				continue
			case '0','1':
				yystate = 19
				continue
			default:
				yystate = 17
				continue
			}
		case 15:
			yystate = 16
			continue
		case 16:
			{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
		case 17:
			yystate = 18
			continue
		case 18:
			{ return 0, eSyntax }
		case 19:
			yystate = 20
			continue
		case 20:
			{ add_digit(2, '0');     goto loop }
		case 21:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 22
				continue
			case '0','1','2','3','4','5','6','7','8','9':
				yystate = 26
				continue
			default:
				yystate = 24
				continue
			}
		case 22:
			yystate = 23
			continue
		case 23:
			{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
		case 24:
			yystate = 25
			continue
		case 25:
			{ return 0, eSyntax }
		case 26:
			yystate = 27
			continue
		case 27:
			{ add_digit(10, '0');    goto loop }
		case 28:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 29
				continue
			case '0','1','2','3','4','5','6','7','8','9':
				yystate = 33
				continue
			case 'A','B','C','D','E','F':
				yystate = 35
				continue
			case 'a','b','c','d','e','f':
				yystate = 37
				continue
			default:
				yystate = 31
				continue
			}
		case 29:
			yystate = 30
			continue
		case 30:
			{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
		case 31:
			yystate = 32
			continue
		case 32:
			{ return 0, eSyntax }
		case 33:
			yystate = 34
			continue
		case 34:
			{ add_digit(16, '0');    goto loop }
		case 35:
			yystate = 36
			continue
		case 36:
			{ add_digit(16, 'A'-10); goto loop }
		case 37:
			yystate = 38
			continue
		case 38:
			{ add_digit(16, 'a'-10); goto loop }
		case 39:
			yych = str[cursor]
			cursor += 1
			switch (yych) {
			case 0x00:
				yystate = 40
				continue
			case '0','1','2','3','4','5','6','7':
				yystate = 44
				continue
			default:
				yystate = 42
				continue
			}
		case 40:
			yystate = 41
			continue
		case 41:
			{
		if result < u32Limit {
			return uint32(result), nil
		} else {
			return 0, eOverflow
		}
	}
		case 42:
			yystate = 43
			continue
		case 43:
			{ return 0, eSyntax }
		case 44:
			yystate = 45
			continue
		case 45:
			{ add_digit(8, '0');     goto loop }
		default:
			panic("internal lexer error")
		}
	}
}

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
