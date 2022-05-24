#include "lists.h"

/**
 * print_list - function to print all the elements
 * @h: pointer to the list elements
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}
	return (nodes);
}
