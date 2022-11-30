#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - function that count unique nodes
 * @head: pointer to first node
 * Return: nodes
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *fast, *slow;
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
 * free_listint_safe - function that frees a list
 * @h: pointer to first node
 * Return: node
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *p;
	size_t nd, index;

	nd = looped_listint_count(*h);

	if (nd == 0)
	{
		for (; h != NULL && *h != NULL; nd++)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
		}
	}

	else
	{
		for (index = 0; index < nd; index++)
		{
			p = (*h)->next;
			free(*h);
			*h = p;
		}

		*h = NULL;
	}

	h = NULL;

	return (nd);
}
