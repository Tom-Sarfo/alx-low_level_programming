#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	size_t char_count;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (char_count = 0; str[char_count]; char_count++)
		;

	new_node->len = char_count;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (*head);
}
