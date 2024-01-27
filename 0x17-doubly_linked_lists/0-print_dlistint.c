#include "lists.h"

/**
 * print_dlistint - this function prints the number of node in a list.
 * @h: head node of the list.
 * Return: number of nodes in a list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	size_t number_of_nodes = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", (*h).n);

		h = (*h).next;

		number_of_nodes += 1;
	}

	return (number_of_nodes);
}
