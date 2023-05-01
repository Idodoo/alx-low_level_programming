#include "lists.h"

int pop_listint(listint_t **head)
{
    int node;
    listint_t *h;
    listint_t *curr;
    if(*head == NULL)
      return (0);
    curr = *head;

    node = curr->n;
    h =  curr->next;
    free(curr);
    *head = h;
    return(node);
}
