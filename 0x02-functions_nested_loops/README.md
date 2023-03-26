# Functions and Nested Loops
## Topics
Nested while loops  
Functions  
What is the purpose of a function prototype?  
C - Header Files  
## Files
### 0-putchar.c
A program that prints _putchar, followed by a new line.  
The program should return `0`  
### 1-alphabet.c
A function that prints the alphabet, in lowercase, followed by a new line.  
Prototype: `void print_alphabet(void);`  
You can only use `_putchar` twice in your code  
### 2-print_alphabet_x10.c
A function that prints 10 times the alphabet, in lowercase, followed by a new line.  
Prototype: `void print_alphabet_x10(void);`  
You can only use `_putchar` twice in your code  
### 3-islower.c
A function that checks for lowercase character.  
Prototype: `int _islower(int c);`  
Returns `1` if `c` is lowercase  
Returns `0` otherwise
### 4-isalpha.c
A function that checks for alphabetic character.  
Prototype: `int _isalpha(int c);`  
Returns `1` if `c` is a letter, lowercase or uppercase  
Returns `0` otherwise  
### 5-sign.c
A function that prints the sign of a number.  
Prototype: `int print_sign(int n);`  
Returns `1` and prints `+` if `n` is greater than zero   
Returns `0` and prints `0` if `n` is zero  
Returns `-1` and prints `-` if `n` is less than zero
### 6-abs.c
A function that computes the absolute value of an integer.  
Prototype: `int _abs(int);`  
### 7-print_last_digit.c
A function that prints the last digit of a number.  
Prototype: `int print_last_digit(int);`  
Returns the value of the last digit  
### 8-24_hours.c
A function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
Prototype: `void jack_bauer(void);`  
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
```
### 9-times_table.c
A function that prints the 9 times table, starting with 0.  
Prototype: `void times_table(void);`  
```
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
```
### 10-add.c
A function that adds two integers and returns the result.  
Prototype: `int add(int, int);`  
### 11-print_to_98.c
A function that prints all natural numbers from `n` to `98`, followed by a new line.  
Prototype: `void print_to_98(int n);`  
Numbers must be separated by a comma, followed by a space  
Numbers should be printed in order  
The first printed number should be the number passed to your function  
The last printed number should be `98` followed by a new line  
You are allowed to use the standard library  
### 100-times_table.c
A function that prints the `n` times table, starting with `0`.  
Prototype: `void print_times_table(int n);`  
If `n` is greater than `15` or less than `0` the function should not print anything
### 101-natural.c
A program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.  
### 102-fibonacci.c
A program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.  
The numbers must be separated by comma, followed by a space , 
### 103-fibonacci.c
By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, this program finds and prints the sum of the even-valued terms, followed by a new line.  
### 104-fibonacci.c
A program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.  
The numbers should be separated by comma, followed by a space  
You are allowed to use the standard library  
You are not allowed to use any other library (You can’t use `GMP` etc…)  
You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
You are not allowed to hard code any Fibonacci number (except for `1` and `2`)
