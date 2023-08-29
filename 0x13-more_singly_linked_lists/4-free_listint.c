#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 *
 * @head: the head of the list
 *
 * Return: NULL if error
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}
