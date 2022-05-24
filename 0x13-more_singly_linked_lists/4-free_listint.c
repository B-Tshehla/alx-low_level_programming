#include "lists.h"

/**
 * free_listint - "Frees the memory of the linked list"
 *
 *@head: "Point to the address of the linked list"
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
