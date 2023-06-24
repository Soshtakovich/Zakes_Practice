#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of a listint_t list.
 *
 * @h: head of linked list
 *
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *temp_h = h;

	while (temp_h)
	{
		printf("%d\n", temp_h->n);
		temp_h = temp_h->next;
		i++;
	}
	return (i);
}
