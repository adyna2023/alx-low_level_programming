#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: oringinal linked list
 * @str: to add a new string to the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int length = 0;

	while (str[length])
		length++;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);

	temp->str = strdup(str);
	temp->len = length;
	temp->next = (*head);
	(*head) = temp;

	return (*head);
}
