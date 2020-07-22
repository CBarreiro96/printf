#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("gerger let' print a test &&& .\n");
    ui = (unsigned int)INT_MAX + 1024;
    _printf("Length:[%d, %i]\n", len, len);
    _printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    _printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string ! %% %c "" 'r' ''' %123$ 3 ");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    _printf("Unknown:[%r]\n");
    return (0);
}
