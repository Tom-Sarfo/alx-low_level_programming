#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node
 *
 * @head: head of list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);

	while (head->prev != NULL)
		head = head->prev;

	idx = 0;

	while (head != NULL)
	{
		if (idx == index)
			break;
		head = head->next;
		idx++;
	}

	return (head);
}
