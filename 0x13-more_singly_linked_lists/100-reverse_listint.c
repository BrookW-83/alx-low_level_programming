#include "lists.h"

/**
 * reverse_listint - function reverses a listint_t list.
 * @head: pointer to first node
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *fast, *slow;

	if (head == NULL || *head == NULL)
		return (NULL);

	slow = NULL;

	while ((*head)->next != NULL)
	{
		fast = (*head)->next;
		(*head)->next = slow;
		slow = *head;
		*head = fast;
	}

	(*head)->next = slow;

	return (*head);
}
