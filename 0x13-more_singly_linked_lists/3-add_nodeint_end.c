#include "lists.h"
/**
 * add_nodeint - "Adds a new node at the end of a linked list"
 *
 * @head: "Points to the head of the linked list"
 * @n: "The interger for new node"
 *
 * Return: "The address of the new element or NULL"
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));

	if(new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (*head);
}
