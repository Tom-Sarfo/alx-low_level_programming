/**
  *list_len - determines the number of elements in a linked list_t
  *@h: the linked list
  *Return: the number of elements
  */
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t element;
	for (element = 0; h != NULL; element++)
	{
		h = h->next;
	}
	return (element);
}
