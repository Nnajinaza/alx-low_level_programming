#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: On success the value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (mid = first; mid < last; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = first + (last - first) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}

		if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}
	return (-1);
}
