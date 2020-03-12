#include "sort.h"

/**
 * insertion_sort_list - sorting dublinked list of integers in ascending order
 * @list: begining/start of the list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	listint_t *node, *swich;
	listint_t *index;

	if (list == NULL || *list == NULL)
		return;

	index = (*list)->next;

	for (; index != NULL; index = index->next)
	{temp = index;

		for (; temp != NULL; temp = temp->prev)
		{node = temp;
		swich = index;

			if (node->n > swich->n)
			{
				if (swich->next != NULL)
					swich->next->prev = node;
				if (node->prev != NULL)
					node->prev->next = swich;
				swich->prev = node->prev;
				node->prev = swich;
				node->next = swich->next;
				swich->next = node;
				if (swich->prev == NULL)
					*list = swich;
				print_list(*list);
			}
		}
	}
}
