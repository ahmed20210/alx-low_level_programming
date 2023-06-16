#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node to the end of a linked list
 * @first: double pointer to the beginning of the linked list
 * @n: value to add to new node
 *
 * Return: pointer to the new node, or NULL on failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **first, const int n)
{
	dlistint_t *new_node, *tmp_node;

	if (first == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*first == NULL)
	{
		new_node->prev = NULL;
		*first = new_node;
		return (new_node);
	}
	for (tmp_node = *first; tmp_node->next != NULL; tmp_node = tmp_node->next)
		;
	tmp->next = new_node;
	new_node->prev = tmp_node;
	return (new_node);
}
