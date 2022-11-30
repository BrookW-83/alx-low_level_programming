#include "lists.h"

/**
 * add_nodeint - function adds new node at head
 * @head: pointer to first node
 * @n: new node size
 * Return: function Null else new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *s;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;
	s->next = *head;

	*head = s;

	return (s);
}
