#include "lists.h"
#include <stdio.h>

/**
* print_list - "print elements of linkedlist"
* @h: "linked list"
* 
* Return: "number of nodes"
*/

size_t print_list(const list_t *h)
{
    size_t numNodes = 0;
    const list_t *currlist = h;

    while (currlist != NULL)
    {
        if (h->str == NULL)
        {
			printf("[0] (nil)\n");
        }
		else
        {
			printf("[%d] %s\n", h->len, h->str);
        }
		numNodes++;
		h = h->next;
    }
    return (numNodes);
}