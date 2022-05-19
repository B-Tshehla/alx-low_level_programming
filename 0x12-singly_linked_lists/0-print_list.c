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
        printf("[%d] %s\n", currlist->len);
        if (currlist->str != NULL)
        {
            current->str;
        }
        else
        {
            return ("nil");
        }
        current = current->next;
        numNodes++;
    }
    return (numNodes);
}