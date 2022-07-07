#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

<<<<<<< HEAD
typedef struct structure
{
	char *h;
	int (*x)(va_list list);
} s_t;
=======
typedef struct print
{
	char *format;
	int (*)(int a, int b);
} format_t;
>>>>>>> 4e14ebff92e8b45397a8dda4748ca44cd9aafe21

int _printf(const char *format, ...);
int _putchar(char c);

int print_ch(va_list);
int print_str(va_list);
int print_per(va_list);

#endif
