#include "lists.h"

/**
 * free_listint - functions that frees a list
 * @head: pointer to first node
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	while (head)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
