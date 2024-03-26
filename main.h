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
typedef struct formats
{
	char type arg;
	int (*f)(va_list args);
} format_t;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
