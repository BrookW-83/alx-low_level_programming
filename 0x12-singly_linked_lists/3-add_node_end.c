#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node to end of list
 * @head: pointer to first node
 * @str: input element
 *
 * Return: pointer of new element else NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *p;
	int len;
	list_t *n, *c;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);

	p = strp(str);
	if (str == NULL)
	{
		free(n);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	n->str = p;
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
		*head = n;

	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = n;
	}

	return (*head);
}
