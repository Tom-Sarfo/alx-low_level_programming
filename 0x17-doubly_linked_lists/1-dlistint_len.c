#include "lists.h"

/**
* dlistint_len - Count number of node in lists.
* @h: head node 
* Return: number of element in the list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_nodes = 0;

	size_t idx;

	for (idx = 0; h != NULL ; idx++)
	{
		h = (*h).next;

		num_of_nodes += 1;
	}

	return (num_of_nodes);
}
