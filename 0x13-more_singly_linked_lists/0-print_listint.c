#include "lists.h"

size_t print_listint(const listint *head)
{
    size_t nnodes = 0;
    while(head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        nnodes++;
    }
    return  (nnodes);
}
