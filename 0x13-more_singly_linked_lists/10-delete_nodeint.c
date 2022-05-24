#include "lists.h"

/**
 * delete_nodeint_at_index - "Deletes the node at a given
 *                           index of a listint_t list."
 * @head: "Points to the address of the
 *        head of the linked list."
 * @index: "The index of the node to be deleted"
 *
 * Return: "Success - 1 or -1"
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *cpy = *head;
	unsigned int node = 0;

	if (cpy == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	while (node < (index - 1))
	{
		if (cpy->next == NULL)
		{
			return (-1);
		}
		cpy = cpy->next;
		node++;
	}

	temp = cpy->next;
	cpy->next = temp->next;
	free(temp);
	return (1);
}
