#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int _printf(const char *format, ...);int _putchar(char c);

int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);

#endif
