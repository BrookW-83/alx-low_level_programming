#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts in given poistion
 * @head: pointer to first node
 * @idx: index for nodes
 * @n: new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *s, *p = *head;
	unsigned int nd;

	s = malloc(sizeof(listint_t));
	if (s == NULL)
		return (NULL);

	s->n = n;

	if (idx == 0)
	{
		s->next = p;
		*head = s;
		return (s);
	}

	for (nd = 0; nd < (idx - 1); nd++)
	{
		if (p == NULL || p->next == NULL)
			return (NULL);

		p = p->next;
	}

	s->next = p->next;
	p->next = s;

	return (s);
}
