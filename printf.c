#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	va_list argument;
	unsigned int i, j;
	unsigned int len = 0;

	print_f characters[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(argument, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (characters[j].print_function_anything != NULL)
			{
				if (format[i + 1] == characters[j].type[0])
				{
					len = len + characters[j].print_function_anything(argument);
					i++;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		}
		i++;
	}

	va_end(argument);
	return (len);
}
