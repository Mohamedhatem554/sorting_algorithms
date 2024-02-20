#include "sort.h"


/**
 * insertion_sort_list - insertion sort
 * @list: list node
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp1;
	listint_t *temp2;

	if (!list || !*list || !(*list)->next)
		return;

	temp1 = (*list)->next;

	while (temp1)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		while (temp2 && temp2->prev)
		{
			if (temp2->prev->n > temp2->n)
			{
				swap(temp2->prev, temp2);
				if (!temp2->prev)
					*list = temp2;
				print_list((const listint_t *)*list);
			}
			else
			{
				temp2 = temp2->prev;
			}
		}
	}
}
