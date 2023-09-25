/**
 * listint_len - return the number of elements
 * @h: pointer
 * Return: integer
 * Description: return the number of elements in a linked list
 *
 */
#include "lists.h"
size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h != NULL)
	{
		num_elem++;
		h = h->next;
	}

	return (num_elem);
}
