#include "main.h"

/**
 * _sqrt_recursion - Entry point
 * @n: natural nos value
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return -1;
	else
		return n * _sqrt_recursion(n / 2);
}
