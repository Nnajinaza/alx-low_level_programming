#include "main.h"

/**
 * print_triangle - Entry point
 * @size: Entry value
 * Return: Always 0
 */

void print_triangle(int size)
{
	int m;
	int k;
	int d;
	int z;

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
			d = size - 1;
			for (k = 0; k < m; k--)
			{
				_putchar(' ');
			}
			for (z = d; z > 0; z--)
			{
				_putchar('#');
			}
			d++;
			_putchar('\n');
		}
	}
}
