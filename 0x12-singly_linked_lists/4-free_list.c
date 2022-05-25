#include "lists.h"

/**
 * free_list - function that frees a data structure list
 * @head: pointer to the first node
 *
 * Return: vooid
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
