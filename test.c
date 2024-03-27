include "main.h"
#include <unistd.h>
#include <stdarg.h>

int process_format(const char *format, va_list args)
{
	int i;
	int count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				count += _print_char(args);
			}
			else if (format[i] == 's')
			{
				count += print_string(args);
			}
			else if (format[i] == '%')
			{
				count += _print_modulo(args);
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
	}

	return count;
}

