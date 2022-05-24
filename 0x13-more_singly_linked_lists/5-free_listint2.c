#include "lists.h"

/**
 * free_listint2 - "Frees memory of the linked list"
 *
 *@head: "Points to the address of the head of the linked list"
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
