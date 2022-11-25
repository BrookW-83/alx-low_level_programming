#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * @head: pointer to first node
 * @str: the input to be added to list
 *
 * Return: ponter to new element else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = dup;
	n->len = len;
	n->next = *head;

	*head = n;

	return (n);
}
