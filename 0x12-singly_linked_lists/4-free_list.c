#include"lists.h"
/**
  *free_list - frees a list_t list
  *@head: the pointer to list
  *Return: none
  */
void free_list(list_t *head)
{
	list_t *list = head;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list->str);
		free(list);
	}
}
