#include "main.h"

/**
 * print_square - Entry point
 * @size: Entry value
 * Return: Always 0
 */

void print_square(int size)
{
	int m;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
