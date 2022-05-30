#include "main.h"

/**
 * print_binary - function to convert to binary using bitwise
 * @n: stores number to be converted
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned int value;

	for (i = 10; i >= 0; i--)
	{
		value = n >> i;

		if (value & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
