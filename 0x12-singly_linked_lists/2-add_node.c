#include "lists.h"
#include "string.h"

/*
* add_node - "Adds a new node at the beginning of the linked list"
* 
*@head: "Points to the head of the linked list"
*@str: "The string to be added to the linked list"
*
*Return: "The address of the new element, or NULL"
*/

list_t *add_node(list_t **head, const char *str)
{
	char *rep;
	int len = 0;
	list_t *new;
	
	new = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return (NULL);
	}
	
	rep = strdup(str);
	
	if (rep == NULL)
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
	new->next = *head;
	*head = new;
	
	return (new);
}
