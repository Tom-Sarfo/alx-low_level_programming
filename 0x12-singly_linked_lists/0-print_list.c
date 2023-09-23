#include "lists.h"
/**
 * print_list - prints elements of  list_t.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */
size_t print_list(const list_t *h)
{
	 size_t num_elements;

	for (num_elements = 0; h != NULL; num_elements++)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else	
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

		return (num_elements);
}
