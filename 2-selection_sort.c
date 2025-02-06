#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array using the Selection sort algorithm
 * and prints the array after each swap.
 * @array: The array to be sorted
 * @size: The number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp; /* Variable for swapping */

	for (i = 0; i < size - 1; i++)
	{
		min = i; /* Assume the first element is the minimum */

		/* Find the minimum element in the remaining array */
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j; /* Update min index */
		}

		/* Swap only if min index is different */
		if (min != i)
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;

			/* Print the array after swapping */
			print_array(array, size);
		}
	}
}

