#include "holberton.h"

/**
* comp_func - function to compare arguments
* @format : print format
* @characters: string
* @argument : argument to compare
* Return: len
* Description: Function to compare arguments receiving
* a string
*
**/

int comp_func(const char *format, print_f characters[], va_list argument)
{
	unsigned int i = 0, j, len = 0, others = 0;

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (characters[j].print_function_anything != NULL)
			{
				if (format[i + 1] == characters[j].type[0] && format[i] == '%')
				{
					len = len + characters[j].print_function_anything(argument);
					others = 1;
					i++;
				} j++;
			}
			if (others == 0)
			{
				_putchar(format[i]);
				len = len + 1;
			}
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
			len = len + 1;
		}
		else
		{
			_putchar(format[i]);
			len = len + 1;
		} i++;
	}
	return (len);
}
