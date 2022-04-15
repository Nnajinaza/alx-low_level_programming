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
	int d = size - 1;
	int l;

	if (size > 0)
	{

		for (m = 0; m < size; m++)
		{
			for (k = 0; k < size; k++)
			{
				if (k < size)
					_putchar('#');
				else
					_putchar(' ');
			}
				for (l = 0; l < ; l++)
				{
					_putchar(' ');
				}
			d--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
