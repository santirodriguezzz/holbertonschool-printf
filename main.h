#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct structure
{
	char *h;
	int (*x)(va_list list);
} s_t;

int _printf(const char *format, ...);
int _putchar(char c);

int print_ch(va_list);
int print_str(va_list);
int print_per(va_list);

#endif
