/**
 * print_listint - print elements of list
 * @h: ponter
 * Return: integer
 * Description: prints out all the elements of a list
 *
 */
#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
