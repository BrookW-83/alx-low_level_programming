#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list.
 * @head: pointer to first node
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *prev;

	if (head == NULL || *head == NULL)
		return (NULL);

	prev = NULL;

	while ((*head)->next != NULL)
	{
		curr = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = curr;
	}

	(*head)->next = prev;

	return (*head);
}
