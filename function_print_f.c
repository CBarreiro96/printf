#include "holberton.h"

/**
 * print_char - prints character c
 * @argument: character to print
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
 * print_string - prints string s
 * @argument: string to print
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
/**
*print_dec - prints string dec
*@argument: string to print
*Return: number of characters printed
*/
int print_dec(va_list argument)
{
	int n = va_arg(argument, int);
	int num;
	int lastdigit = n % 10;
	int digit;
	int space = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (lastdigit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lastdigit = -lastdigit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			space = space * 10;
			num = num / 10;
		}
		num = n;
		while (space > 0)
		{
			digit = num / space;
			_putchar(digit + '0');
			num = num - (digit * space);
			space = space / 10;
			i++;
		}
	}
	_putchar(lastdigit + '0');

	return (i);
}
/**
*print_int - prints string dec
*@argument: string to print
*Return: number of characters printed
*/
int print_int(va_list argument)
{
	int n = va_arg(argument, int);
	int num;
	int lastdigit = n % 10;
	int digit;
	int space = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (lastdigit < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		lastdigit = -lastdigit;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			space = space * 10;
			num = num / 10;
		}
		num = n;
		while (space > 0)
		{
			digit = num / space;
			_putchar(digit + '0');
			num = num - (digit * space);
			space = space / 10;
			i++;
		}
	}
	_putchar(lastdigit + '0');

	return (i);
}
