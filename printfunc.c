#include "main.h"
#include <limits.h>
/**
* print_ch - prints char
* @list: list of functions
* Return: int
*/
int print_ch(va_list list)
{
	_putchar(va_arg(list, int));
		return (1);
}
/**
* print_str - prints string
* @list: list of functions
* Return: int
*/
int print_str(va_list list)
{
	char *z, *null = "(null)";
	int l, len;

	z = va_arg(list, char *);

	if (z == NULL)
	{
		for (l = 0; null[l]; l++)
			_putchar(null[l]);
		return (6);
	}
	else
	{
		len = strlen(z);
		for (l = 0; l < len; l++)
			_putchar(z[l]);
		return (len);
	}
}
/**
* print_per - prints %
* @list: list of functions
* Return: int
*/

int print_per(va_list list)
{
	char *string;
	int x;

	string = va_arg(list, char*);
	x = 0;

	while (string[x])
	{
		if (string[x] == '%')
		{
			_putchar('%');
			return (1);
		}
	}
	return (0);
}
/**
 * print_num - prints an int
 * @list: argument
 * Return: int
 */
int print_num(va_list list)
{
	int n = va_arg(list, int);
	int i, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		count++;
	}
	for (i = 1; i <= n; i *= 10)
	{
		count++;
	}
	i /= 10;
	for (; i > 0; i /= 10)
	{
		_putchar(((n / i) % 10) + '0');
	}
	return (count);
}
