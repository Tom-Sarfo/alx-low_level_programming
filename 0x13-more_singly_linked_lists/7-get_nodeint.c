/**
 * get_nodeint_at_index - returns nth node
 * @head: pointer to the first node
 * @index: index of a particular node
 * Return: nth node, NULL if node not found
 * Description: return the nth node of a linked list
 */
#include "lists.h"
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = malloc(sizeof(listint_t));

	temp = head;
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
