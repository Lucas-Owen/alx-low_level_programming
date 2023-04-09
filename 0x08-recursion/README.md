# Recursion
## Files
### 0-puts_recursion.c
A function that prints a string, followed by a new line.  
Prototype: `void _puts_recursion(char *s);`
### 1-print_rev_recursion.c
A function that prints a string in reverse.  
Prototype: `void _print_rev_recursion(char *s);`
### 2-strlen_recursion.c
A function that returns the length of a string.  
Prototype: `int _strlen_recursion(char *s);`
### 3-factorial.c
A function that returns the factorial of a given number.  
Prototype: `int factorial(int n);`  
If `n` is lower than `0`, the function should return `-1`
### 4-pow_recursion.c
A function that returns the value of `x` raised to the power of `y`.  
Prototype: `int _pow_recursion(int x, int y);`  
If `y` is lower than `0`, the function should return `-1`
### 5-sqrt_recursion.c
A function that returns the natural square root of a number.  
Prototype: `int _sqrt_recursion(int n);`  
If `n` does not have a natural square root, the function should return `-1`
### 6-is_prime_number.c
A function that returns `1` if the input integer is a prime number, otherwise return `0`.  
Prototype: `int is_prime_number(int n);`
### 100-is_palindrome.c
A function that returns `1` if a string is a palindrome and `0` if not.  
Prototype: `int is_palindrome(char *s);`  
An empty string is a palindrome
### 101-wildcmp.c
A function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.  
Prototype: `int wildcmp(char *s1, char *s2);`  
`s2` can contain the special character `*`.  
The special char `*` can replace any string (including an empty string)
```
julien@ubuntu:~/0x08. Recursion$ cat 101-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
julien@ubuntu:~/0x08. Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
julien@ubuntu:~/0x08. Recursion$ 
```