#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: sorted array in ascending order
 * @size: the full size of the sorted array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int index1 = 0;
	unsigned int index2 = 0;
	unsigned int swap = 0;


	if (array == NULL)
	{
		return;
	}
	for (index1 = 0; index1 < size - 1; index1++)
	{
		for (index2 = 0; index2 < size - index1 - 1; index2++)
		{
			if (array[index2] > array[index2 + 1])
			{
				swap = array[index2];
				array[index2] = array[index2 + 1];
				array[index2 + 1] = swap;
				print_array(array, size);
			}
		}
	}

}
