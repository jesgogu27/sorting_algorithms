#include "sort.h"

/**
* insertion_sort_list - a function that sorts a doubly
* linked list of integers in ascending order using the Insertion
* sort algorithm
* @list: double pointer
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *nodo;

	if (list == NULL || *list == NULL)
		return;

	nodo = (*list)->next;

	while (nodo != NULL)
	{
		while ((nodo->prev) && (nodo->n < nodo->prev->n))
		{
			nodo->prev->next = nodo->next;
			if (nodo->next != NULL)
				nodo->next->prev = nodo->prev;
			nodo->next = nodo->prev;
			nodo->prev = nodo->prev->prev;
			nodo->next->prev = nodo;

			if (nodo->prev == NULL)
				*list = nodo;
			else
				nodo->prev->next = nodo;
			print_list(*list);
		}
		nodo = nodo->next;
	}
}
