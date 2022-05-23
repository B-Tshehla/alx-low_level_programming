#include "lists.h"

/**
 * list_len - "Gives the number of elements in a linked list"
 *
 *@h: "The linked list"
 *
 *Return: "Total number of elements in the link list"
 */
 
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
