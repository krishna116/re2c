/* Generated by re2c */
// re2rust $INPUT -o $OUTPUT

// Expect a string without terminating null.
fn lex(s: &[u8]) -> isize {
    let mut count = 0;
    let mut cursor = 0;
    let limit = s.len();

    'lex: loop {
{
	#[allow(unused_assignments)]
	let mut yych : u8 = 0;
	let mut yystate : usize = 0;
	loop {
		match yystate {
			0 => {
				yych = unsafe {if cursor < limit { *s.get_unchecked(cursor) } else { 0 }};
				cursor += 1;
				match yych {
					0x00 => {
						yystate = 1;
						continue;
					}
					0x20 => {
						yystate = 5;
						continue;
					}
					0x61 ..= 0x7A => {
						yystate = 8;
						continue;
					}
					_ => {
						yystate = 3;
						continue;
					}
				}
			}
			1 => {
				yystate = 2;
				continue;
			}
			2 => { return count; }
			3 => {
				yystate = 4;
				continue;
			}
			4 => { return -1; }
			5 => {
				yych = unsafe {if cursor < limit { *s.get_unchecked(cursor) } else { 0 }};
				yystate = 6;
				continue;
			}
			6 => {
				match yych {
					0x20 => {
						cursor += 1;
						yystate = 5;
						continue;
					}
					_ => {
						yystate = 7;
						continue;
					}
				}
			}
			7 => { continue 'lex; }
			8 => {
				yych = unsafe {if cursor < limit { *s.get_unchecked(cursor) } else { 0 }};
				yystate = 9;
				continue;
			}
			9 => {
				match yych {
					0x61 ..= 0x7A => {
						cursor += 1;
						yystate = 8;
						continue;
					}
					_ => {
						yystate = 10;
						continue;
					}
				}
			}
			10 => { count += 1; continue 'lex; }
			_ => {
				panic!("internal lexer error")
			}
		}
	}
}
}
}

fn main() {
    assert_eq!(lex(b""), 0);
    assert_eq!(lex(b"one two three "), 3);
    assert_eq!(lex(b"f0ur"), -1);
}
