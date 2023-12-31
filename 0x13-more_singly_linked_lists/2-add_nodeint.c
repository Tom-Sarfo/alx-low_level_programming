#include"lists.h"
/**
  *add_nodeint - add the node at the beginning of the list
  *@head: pointer to the new node
  *@n: the data of the new node
  *Return: address of added node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node ==	NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
