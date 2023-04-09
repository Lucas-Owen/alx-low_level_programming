# Even more pointers, arrays and strings
## Topics Covered
Poitner to Pointer  
Multi-dimensional Arrays
## Files
### 0-memset.c
A function that fills memory with a constant byte.  
Prototype: `char *_memset(char *s, char b, unsigned int n);`  
The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`  
Returns a pointer to the memory area `s`
### 1-memcpy.c
A a function that copies memory area.  
Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`  
The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`  
Returns a pointer to `dest`
### 2-strchr.c
A function that locates a character in a string.  
Prototype: `char *_strchr(char *s, char c);`  
Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
### 3-strspn.c
A function that gets the length of a prefix substring.  
Prototype: `unsigned int _strspn(char *s, char *accept);`  
Returns the number of bytes in the initial segment of `s` which consist only of bytes from `accept`
### 4-strpbrk.c
A function that searches a string for any of a set of bytes.  
Prototype: `char *_strpbrk(char *s, char *accept);`  
The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string accept  
Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found
### 5-strstr.c
A function that locates a substring.  
Prototype: `char *_strstr(char *haystack, char *needle);`  
The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared  
Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.
### 7-print_chessboard.c
A function that prints the chessboard.  
Prototype: `void print_chessboard(char (*a)[8]);`
### 8-print_diagsums.c
A function that prints the sum of the two diagonals of a square matrix of integers.  
Prototype: `void print_diagsums(int *a, int size);`  
Format: see example  
You are allowed to use the standard library  
Note that in the following example we are casting an `int[][]` into an `int*`.  
```
julien@ubuntu:~/0x07$ cat 8-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
julien@ubuntu:~/0x07$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
julien@ubuntu:~/0x07$ 
```
### 100-set_string.c
A function that sets the value of a pointer to a char.  
Prototype: `void set_string(char **s, char *to);`
### 101-crackme_password
A file that contains the password for the `crackme2` executable.
Your file should contain the exact password, no new line, no extra space
`ltrace`, `ldd`, `gdb` and `objdump` can help  
You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`  
Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update and sudo apt install libssl1.0.0`