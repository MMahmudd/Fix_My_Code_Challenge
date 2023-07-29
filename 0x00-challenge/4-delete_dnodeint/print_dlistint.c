#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Prints_a_doubly_linkedlist_of integers
 *
 * @h: A pointer_to the_first component_of a_list
 *
 * Return: The_number of_the components_printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
