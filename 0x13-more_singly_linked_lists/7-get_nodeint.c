#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: points first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while
		(i < index);

	{
		head = head->next;
		i++;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
