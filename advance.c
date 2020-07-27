#include "holberton.h"
/**
*print_binary- Convert to binary
* @argument: character to print
* Return: number of characters printed
*/

int print_binary(va_list argument)
{
	unsigned int bin = va_arg(argument, int);
	int count, i;
	unsigned int * buff= malloc(1000 * sizeof(unsigned int));
	

	if (bin == 0)
	{
		_putchar('0');
		return (1);
	}
	count = 0;
	while (bin > 0)
	{
		buff[count] = bin % 2;
		bin /= 2;
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(buff[i] + '0');
	}
	free(buff);
	return (count);
}