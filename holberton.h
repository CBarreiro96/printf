#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdarg.h>
#include <stdlib.h>

typedef struct print
{
	char *type;
	int (*func)(va_list);
} print_t;

int _printf(const char *format, ...);
int print_c(va_list c);
int print_s(va_list s);
int print_per(va_list p);
int print_di(va_list di);

#ifndef