#include <stdio.h>
#include <stdlib.h>

/**
 * add - function to add
 * @i: first value
 * @j: second value
 * Return: sum
 */
int add(int i, int j)
{
	int sum;
	sum = i + j;

	return (sum);
}

/**
 * sub - function to substract
 * @i: first value
 * @j: second value
 * Return: difference
 */
int sub(int i, int j)
{
	int diff;
	diff = i - j;

	return (diff);
}

/**
 * mul -function to multiply
 * @i: first value
 * @j: second value
 * Return: result
 */
int mul(int i, int j)
{
	int result;
	result = i * j;

	return (result);
}

/**
 * divide -function to divide
 * @i: first value
 * @j: second value
 * Return: result
 */
int divide(int i, int j)
{
	int res;
	res = i / j;

	return (res);
}

/**
 * mod - function to get the modulus
 * @i: first value
 * @j: second value
 * Return: result
 */
int mod(int i, int j)
{
	int res;
	res = i % j;

	return (res);
}
