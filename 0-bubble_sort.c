#include "sort.h"

/**
* bubble_sort - Sort an array with the bubble sort algorithm
* @array: Array sorted
* @size: Size of the array
*/

void bubble_sort(int *array, size_t size)
{
	unsigned long int i;
	int tmp;

	if (size < 2)
		return;

	for (i = 1; i <= size; i++)
	{

		if (array[i - 1] > array[i])
		{
			tmp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = tmp;
			print_array(array, size);
			i = 0;
		}
	}
}
