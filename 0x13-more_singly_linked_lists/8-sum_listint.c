#include "lists.h"

/**
 * sum_listint - " The sum of all the data in the linked list"
 *
 *@head: "The address of the head of the linked list"
 *
 *Return: "The sum of the linked list elements"
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
 
