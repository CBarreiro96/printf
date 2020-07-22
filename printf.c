#include "holberton.h"
/**
 * _printf - produces output according to a format
 * @format: character string
 * Return: number of characters printed excluding null byte
 */
int _printf(const char *format, ...)
{
	va_list argument;
	int i = 0, prints;

	print_f characters[] = {
		{"d", print_dec},
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};
	
	i = 0;
	if (!format || format[i] == '\n' || format[i] == '\0' ||
	   (format[i] == '%' && !format[i + 1]))
	{
		return (-1);
	}
	va_start(argument, format);
	prints = compare_function(format, characters, argument);
	va_end(argument);
	return (prints);
}

