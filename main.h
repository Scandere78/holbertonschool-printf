#ifndef _MAIN.H_
#define _MAIN.H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 *  Formats de structure - structure qui stocke différents formats
 *  _printf peut imprimer et leur fonction respective
 *  definir type args dans le char 
 *  @f: la fonction qui imprimera le type associé
*/
typedef struct format_types
{
	char type arg;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_modulo(va_list args);
#endif
