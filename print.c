#include "main.h"
/**
*
*
*
**/
int _printf(const char *format, ...)
{
	va_list list;
	int y, p, count;
	s_t est[] = {
		{"s", print_str}
		{"c", print_ch}
		{"%", print_per}
	};

	for(y = 0, format[y], y++)
	{
		if (format[y] == '%')
		{
			for(p = 0, est[p], p++)
			{
				if (*est[p].h == format[y + 1])
					{
						count += est[p].x(list)
					}
			
			}
		}
	}
	return (count);
}
