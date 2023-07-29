#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free_a_list
 *
 * @head: A pointer_to_first element_of the_list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
