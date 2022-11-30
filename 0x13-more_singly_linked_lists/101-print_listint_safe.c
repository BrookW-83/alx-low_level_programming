#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - count number of unique node
 * @head: pointer to first node
 * Return: 0 (Success)
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t nd = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	fast = head->next;
	slow = (head->next)->next;

	while (slow)
	{
		if (fast == slow)
		{
			fast = head;
			while (fast != slow)
			{
				nd++;
				fast = fast->next;
				slow = slow->next;
			}

			fast = fast->next;
			while (fast != slow)
			{
				nd++;
				fast = fast->next;
			}

			return (nd);
		}

		fast = fast->next;
		slow = (slow->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - function prints listint_t list
 * @head: pointer to first node
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nd, index = 0;

	nd = looped_listint_len(head);

	if (nd == 0)
	{
		for (; head != NULL; nd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nd; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nd);
}
