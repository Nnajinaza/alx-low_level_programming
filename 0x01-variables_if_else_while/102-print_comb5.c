#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int num1;
	int num2;
	int num3;
	int num4;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (num2 = '0'; num2 <= '8'; num2++)
		{
			for (num3 = num1; num3 <= '9'; num3++)
			{
				for (num4 = (num2 + '1'); num4 <= '9'; num4++)
				{
					putchar('0' + num1);
					putchar('0' + num2);
					putchar(' ');
					putchar('0' + num3);
					putchar('0' + num4);

					if (num1 <= 9 && num2 <= 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
