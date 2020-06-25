#include "sort.h"

/**
* bubble_sort - ascending order
*@array: elements to order
*@size: size of array.
*
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int aux;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; i < (size - i - 1); j++)
		{

			if (array[j] > array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);

			}
		}
	}
}

