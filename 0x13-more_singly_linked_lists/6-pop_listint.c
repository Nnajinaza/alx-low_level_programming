#include "lists.h"

/**
 * pop_listint - function to delete the head node in a linked list
 * @head: pointer to the list
 *
 * Return: on success data of head node
 * On failure 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head->next;
	*head = temp;
	n = temp->n;
	free(temp);
	return (n);
}
