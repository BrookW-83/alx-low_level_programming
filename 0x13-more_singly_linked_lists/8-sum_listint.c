#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: pointer to first node
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int Sum = 0;

	while (head)
	{
		Sum += head->n;
		head = head->next;
	}

	return (Sum);
}
