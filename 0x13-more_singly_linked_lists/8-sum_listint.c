/**
 * sum_listint - returns the sum of n
 * @head: pointer to the first node
 * Return: integer - sum of n of all nodes
 * Description: returns the sum of n data of a linked list
 */
#include "lists.h"
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
