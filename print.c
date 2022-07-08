#include "main.h"
/**
* _printf - function that prints a string
* @*format: constant
* Return: count
**/
int _printf(const char *format, ...)
{
	va_list list;
	int y, count;

	for (y = 0; format[y]; y++)
	{
		if (format[y] == '%' && (format[y + 1] == 0 || format[y + 1] == '%'))
		{
			_putchar('%');
			y++;
			count++;
		}
		else if (format[y] == '%')
		{
			count += auxs(list, format[y + 1]);
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
int auxs(va_list list, char c)
{
	s_t est[] = {
		{"s", print_str},
		{"c", print_ch},
		{"%", print_per},
	};
	int j = 0;

	while (j < 3)
	{
		if (*est[j].h == c)
			return (est[j].x(list));
		j++;
	}
	_putchar('%');
	_putchar(c);
	return (2);
}
