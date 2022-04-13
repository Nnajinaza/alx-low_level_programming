#include "main.h"

/**
 * times_table - Entry poin
 * @i: Entry value
 * @j: Entry value
 * @d: Multiplication value
 * Return: Always o
 */

void times_table(void)
{
	int i;
	int j;
	int d;

	for (i =0; i <= 9; i++)
	{
		for (j =0; j <= 9; j++)
		{
			d = i * j;
			if ((d / 10) == 0)
			{
				if (j == 0)
				{
					_putchar('0');
				}
				if (j != 0)
				{
					_putchar(' ');
					_putchar((d % 10) + '0');
				}
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
			_putchar(d /10 + '0');
			_putchar(d % 10 + '0');
			if (j < 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			}
		}
	_putchar('\n');
	}
}
