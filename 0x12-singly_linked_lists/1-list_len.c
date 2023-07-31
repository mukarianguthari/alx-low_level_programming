#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns no of elements in the linked list
 * @h: pointer to the head of the list
 *
 * Teturn: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return count;
}

