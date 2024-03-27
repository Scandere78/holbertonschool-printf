#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * Prints a formatted string to standard output.
 * Supported conversion specifiers: 'c', 's', '%'.
 *
 * @param format The format string.
 * @param ... Optional arguments corresponding to the format.
 *
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
			putchar(format[i]);
			count++;
		}
		else
		{
			i++;
			if (format[i] == 'c')
			{
				int c = va_arg(args, int);
				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);
				count += puts(s);
			}
			else if (format[i] == '%')
			{
				putchar('%');
				count++;
			}
			else
			{
				putchar('%');
				putchar(format[i]);
				count += 2;
			}
		}
	}

	va_end(args);

	return count;
}

