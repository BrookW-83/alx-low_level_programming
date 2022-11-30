#include "lists.h"

/**
 * pop_listint - function pops the head of list
 * @head: pointer to first node
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (*head == NULL)
		return (0);
	p = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(p);

	return(i);
}
