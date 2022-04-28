#include "main.h"

/**
 *_evaluate - Entry point
 *@i: interger
 *@n: interger
 *Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{

	if (n == 0 || n == 1)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else 
	return (i);
}

/**
 *_sqrt_recursion - Entry point
 *@n: interger
 *Return: Always 0
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0) 
		return (-1);
	return (_evaluate(i, n));
}
