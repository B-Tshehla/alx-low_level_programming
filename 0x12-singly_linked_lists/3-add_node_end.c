#include <string.h>
#include "lists.h"

/**
 * add_node_end - "Adds a new node at the end
 *                of a list_t list."
 * @head: "Points to the head of the linked list."
 * @str: "The string to be added to the linked list."
 *
 * Return: "The address of the new element or NULL"
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *rep;
	int len = 0;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return (NULL);
	}
	
	rep = strdup(str);
	
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	new->str = rep;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		
		while ((last->next) != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
