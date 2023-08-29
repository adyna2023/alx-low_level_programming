#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 *
 * @head: the head of the list
 *
 * return: NULL if error
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

}
