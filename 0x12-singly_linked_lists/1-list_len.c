#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gives the number of elements in a list
 * @h: pointer to the list
 *
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t nbr = 0;

	while (h)
	{
		nbr++;
		h=h->next;
	}
	return (nbr);
}
