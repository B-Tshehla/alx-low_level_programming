#include "lists.h"

/**
 * get_nodeint_at_index - "Locates a given node of
 *                        a listint_t linked list."
 * @head: "Points to the head of the linked list."
 * @index: "The index of the node to locate"
 *
 * Return:"The located node or NuLL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
