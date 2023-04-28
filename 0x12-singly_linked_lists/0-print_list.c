#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t lined list
 *
 *@h: is a pointer to the list that we traiter
 *
 * Return:the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil) \n");
		else
			printf("[%u] %s_n", h->len, h->str);
		h = h->next;
		a++;
	}

	return (a);
}
