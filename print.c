#include "main.h"
/**
 * _printf - produces output according to format
**/
int _printf(const char *format, ...)
{
	int i = 0;
	char *sep = " ,"

	va_list list;

	va_start(list, format);

	if (format)
		{
			while (format[i])
			{
				if (format[i] = '%')
					i++;
				else 
				{
				switch (format[i])
					{
						case 'c':
							printf("%s%c", sep, va_arg(list, int));
							break;
						case 's':
							printf("%s%s", sep, va_arg(list, int));
							break;
						default:
							i++;
							continue;
					}
				}
			}
		}
	printf("\n");
	va_end(list);
}
