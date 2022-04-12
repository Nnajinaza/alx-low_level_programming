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

	for (num1 = 00; num1 <= 98; num1++)
	{
		for (num2 = 01; num2 <= 99; num2++)
		{	
			putchar(num1);
			putchar(' ');
			putchar(num2);

			if (num1 != 98 && num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
