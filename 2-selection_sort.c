#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: int
 * @size: size
*/
void selection_sort(int *array, size_t size)
{
	size_t j, k, l;
	int p;

	if (!array || !size)
	return;
	for (j = 0; j < size - 1; j++)
	{
		for (k = size - 1, l = j + 1; k > j; k-- )
		{
			if (array[k] < array[l])
				l = k;
		}
		if (array[j] > array[l])
		{
			p = array[j];
			array[j] = array[l];
			array[l] = p;
			print_array(array, size);
		}
	}
}
