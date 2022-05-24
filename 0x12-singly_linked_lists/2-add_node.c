#include "lists.h"

/**
 * _length - function to get string length
 * @str: array of char
 *
 * Return: length of array
 */
unsigned int _length(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * *add_node - function to add node at the beginning of a list
 * @head: first node in the list
 * @str: str to add in the list
 *
 * Return: address of the new element on success or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _length(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
