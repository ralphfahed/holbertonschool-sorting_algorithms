#include <stdio.h>

/**
 * bubble_sort - Sorts an array of integers in ascending order using the
 *               Bubble sort algorithm
 * @array: Pointer to the array of integers
 * @size: The size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp, k;  /* Declare k here with i, j, temp */

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

				/* Print the array after every swap */
				for (k = 0; k < size; k++)  /* 'k' is now declared at the top */
				{
					printf("%d ", array[k]);
				}
				printf("\n");
			}
		}
	}
}

