#ifndef _LISTS_
#define _LISTS_
#include <stdio.h>
#include <stdlib.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *head);