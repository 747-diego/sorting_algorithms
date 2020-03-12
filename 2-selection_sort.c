#include "sort.h"


/**
 * selection_sort - sorts array with selection sort algorithm
 * @array: array of ints to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int numSmall;
	int current;
	unsigned int index1 = 0;
	unsigned int index2 = 0;

	while (index1 < size -1)
	{
		numSmall = index1;
		index2 = index1 + 1;
		while (index2 < size)
		{
			if (array[index2] < array[numSmall])
				numSmall = index2;
			index2++;
		}

		if (numSmall != index1)
		{
			current = array[numSmall];
			array[numSmall] = array[index1];
			array[index1] = current;
			print_array(array, size);
		}
	index1++;
	}
}
