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
	int i = 0;
	int j;
	int d;

	for (i = 0; i <= 9; i++)
	{
		d = i * j;

		for (j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				_putchar(d + '0');
			}
				else
				{
					_putchar('0' + d / 10);
					_putchar('0' + d % 10);
					_putchar('\n');
				}

			if (j <= 9)
			{
				_putchar(d + '0');
			}
				else
				{
					_putchar('0' + d / 10);
					_putchar('0' + d % 10);
				}
		}
	}
}
