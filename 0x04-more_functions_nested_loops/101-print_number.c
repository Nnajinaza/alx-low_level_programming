#include "main.h"

/**
 * print_number - Entry point
 * @n: integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	int n1;
	int i;
	int j;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	
	i = n1 / 10;
	j = n1 % 10;

	_putchar(i + '0');
	_putchar(j + '0');
}
