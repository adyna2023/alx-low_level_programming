#include <stdlib.h>
#include "lists.h"

/**
 * free_list - to free a linkedlist
 * @head: the head of a linked list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
