#include "lists.h"
/**
 * listint_len - Get number of nodes of a linked list
 *
 * @h: the linke list
 *
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
