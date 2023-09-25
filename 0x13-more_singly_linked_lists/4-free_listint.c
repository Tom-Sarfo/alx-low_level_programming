#include "lists.h"

/**
 * free_listint - free linked list
 * @head: head of a linked list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
