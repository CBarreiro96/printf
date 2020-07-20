#include "holberton.h"

/**
 * p_char - prints character c
 * @arg: character to print
 * Return: number of characters printed
 */
int print_char(va_list argument)
{
	char c;

	c = va_arg(argument, int);

	_putchar(c);

	return (1);
}

/**
 * p_str - prints string s
 * @arg: string to print
 * Return: number of characters printed
 */
int print_string(va_list argument)
{
	unsigned int i;
	char *s;

	s = va_arg(argument, char *);

	i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}


return (i);
}
