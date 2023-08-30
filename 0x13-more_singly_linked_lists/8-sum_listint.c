#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - calculates the sum of the data (n)
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
