#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to first node
 * @index: index for nodes
 * Return: 1 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p, *s = *head;
	unsigned int nd;

	if (s == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(s);
		return (1);
	}

	for (nd = 0; nd < (index - 1); nd++)
	{
		if (s->next == NULL)
			return (-1);

		s = s->next;
	}

	p = s->next;
	s->next = p->next;
	free(p);
	return (1);
}
