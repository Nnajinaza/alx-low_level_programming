#include "lists.h"

/**
 * print_list - function to print all the elements
 * @h: pointer to the list elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int counts = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		counts++;
		h = h->next;
	}
	return (counts);
}
