#include "lists.h"
/**
 * add_node - "Adds a new node at the beginning of a linked list"
 *
 * @head: "Points to the address of the head of the linked list"
 * @n: "The integer for the new node to contain"
 *
 * Return: "The address of the new element or NULL"
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
