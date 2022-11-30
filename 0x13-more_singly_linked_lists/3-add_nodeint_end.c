#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at end
 * @head: pointer of first node
 * @n: new node
 * Return: list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s, *c;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = NULL;

	if (*head == NULL)
		*head = s;

	else
	{
		c = *head;
		while (c->next != NULL)
			c = c->next;
		c->next = s;
	}

	return (*head);
}
