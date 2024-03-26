#include <stdio.h>
#include <stdarg.h>
#include "main.h"
int _printf(const char *format, ...)
{
    int count = 0;
    va_list args;
    va_start(args, format);

    for (int i = 0; format[i] != '\0'; i++)
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