#include "main.h"
#include <stdarg.h>
#include <stddef.h>
int (*get_format_function(char c2))(va_list);
/**
 * _printf - ...
 * @format: String to print and to formated
 * Return: (int)
 */

int _printf(const char *format, ...)
{
	int i = 0, ii, inc, count = 0;
	char c1, c2;
	va_list args;

	va_start(args, format);
	while (format[i] != '\0')
	{
		int printed = 0;

		c1 = format[i];
		inc = 1;

		if (c1 == '%')
		{
			c2 = format[i + 1];
			if (c2 == '\0')
			{
				va_end(args);
				return (-1);
			}
			for (ii = 0; ii < 6; ii++)
			{
				if (get_format_function (c2))
				{
					count += ftypes[ii].f(args);
					inc = 2;
					printed = 1;
					break;
				}
			}
		}
		if (printed == 0)
		{
			count += 1;
			_putchar(c1);
		}
		i += inc;
	}
	va_end(args);
	return (count);
}

/**
 * gettypes - function to return the array of structures
 * Return: specifiers
 */
int (*get_format_function(char c2))(va_list)
{
	int ii;

	format_t ftypes[] = 
	{
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_integer},
		{"d", _print_integer},
		{"%", _print_perc},
		{"u", _print_unsigned_integer},
		{NULL, NULL}
	};
	for (ii = 0; ii < 6; ii++)
	{
		if (ftypes[ii].op[0] == c2)
		{
			return (ftypes[ii].f);
		}
	}
}
