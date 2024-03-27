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
	int count = 0;
	va_list args;

	va_start(args, format);
	count = process_format(format, args);
	va_end(args);

	return count;
}

