#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node
 * @index: index of node
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nd;

	for (nd = 0; nd < index; nd++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
