#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * Prints a formatted string to standard output.
 * Supported conversion specifiers: 'c', 's', '%'.
 * @param format The format string.
 * @param ... Optional arguments corresponding to the format.
 * @return The number of characters printed (excluding the null byte used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	va_list args;
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
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
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
		}
	}

	va_end(args);

	return count;
}
