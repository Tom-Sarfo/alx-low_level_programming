/**
 * pop_listint - delete the head node of list
 * @head: pointer to head node
 * Return: head node data, 0 if list is empty
 * Description: Delete the head node of a linked list
 */
#include "lists.h"
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = (*head)->n;

	temp = *head;

	*head = (*head)->next;

	free(temp);

	return (data);
}
