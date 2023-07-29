#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - removes_a_node at_a specific_index from_a_list
 *
 * @head: A pointer to the_initial_element of_a_list
 * @index: The index_of the_node to_remove
 *
 * Return: 1 on_success, -1 on_failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *saved_head;
	dlistint_t *tmp;
	unsigned int p;

	if (*head == NULL)
	{
		return (-1);
	}
	saved_head = *head;
	p = 0;
	while (p < index && *head != NULL)
	{
		*head = (*head)->next;
		p++;
	}
	if (p != index)
	{
		*head = saved_head;
		return (-1);
	}
	if (index == 0)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->next = (*head)->next;
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		free(*head);
		*head = saved_head;
	}
	return (1);
}
