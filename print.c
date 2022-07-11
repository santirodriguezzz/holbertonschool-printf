#include "main.h"
/**
* _printf - function that prints a string
* @format: constant string
* Return: count
**/
int _printf(const char *format, ...)
{
	va_list list;
	int y, count = 0;

	va_start(list, format);

	if (format == NULL || !(strcmp(format, "%")))
	{
		return (-1);
	}
	for (y = 0; format && format[y]; y++)
	{
		if (format[y] == '%' && (format[y + 1] == 0 || format[y + 1] == '%'))
		{
			y++;
			_putchar('%');
			count++;
		}
		else if (format[y] == '%')
		{
			count += auxs(list, format[y + 1]);
			y++;
		}
		else
		{
			count += 1;
			_putchar(format[y]);
		}
	}
	va_end(list);
	return (count);
}
/**
 * auxs - auxiliar function
 * @c: char
 * @list: name of list of the function
 * Return: int
 */
int auxs(va_list list, char c)
{
	s_t est[] = {
		{'s', print_str},
		{'c', print_ch},
		{'%', print_per},
		{'d', print_num},
		{'i', print_num},
	};
	int j = 0;

	while (j < 5)
	{
		if (est[j].h == c)
			return (est[j].x(list));
		j++;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
