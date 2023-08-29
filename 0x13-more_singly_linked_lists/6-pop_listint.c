#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer of a head
 *
 * Return: empty
 */

int pop_listint(listint_t **head)
{
	listint_t *start_node;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	start_node = (*head)->next;
	free(*head);
	*head = start_node;

	return (n);
}
