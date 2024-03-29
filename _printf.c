#include "main.h"
/*
 * process_format - definir le  format attribuer
 * @format - format types
 * @args - arguments
 * Return - count
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
			else if (format[i] == 'd' || format[i] == 'i')
			{
				count += _print_decimal(args);
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
