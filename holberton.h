#ifndef HOLBERTON_H
#define HOLBERTON_H

/* ---- libraries --- */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct check - struct for conversion specifiers
* @type: struct check
* @print_function_anything: print function specified
*/

typedef struct check
{

	char *type;
	int (*print_function_anything)();

} print_f;

int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list argument);
int print_string(va_list argument);


#endif /* HOLBERTON_H */
