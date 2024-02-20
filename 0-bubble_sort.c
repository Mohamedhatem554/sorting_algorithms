#include "sort.h"


/**
 * bubble_sort - sort algorithms by bubble
 * @array: the array of unsorted numbers
 * @size: the size of this array
 * Return: NOTHING
*/
void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, n;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
