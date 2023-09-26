/**
 * reverse_listint - reverse linked list
 * @head: double pointer to a node
 * Return: pointer to the first node
 */
#include "lists.h"
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	prev = NULL;
	next = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
}
