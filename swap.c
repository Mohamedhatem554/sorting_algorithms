#include "sort.h"

/**
 * swap - swap function
 * @first: first number
 * @second: second number
 * Return: Nothing
*/
void swap(listint_t *first, listint_t *second)
{
	if (first->prev)
		first->prev->next = second;

	if (second->prev)
		second->next->prev = first;

	first->next = second->next;
	second->prev = first->prev;
	first->prev = second;
	second->prev = first;
}
