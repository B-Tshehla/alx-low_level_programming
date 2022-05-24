#include "lists.h"

/**
 * pop_listint - "Deletes the head node of the linked list"
 *
 *@head: "Points to the address of the head of the linked list"
 *
 *Return: " The head node data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int res;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	res = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (res);
}
