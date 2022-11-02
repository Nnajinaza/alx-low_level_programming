#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: On success the value else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
