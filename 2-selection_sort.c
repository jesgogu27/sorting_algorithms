#include "sort.h"
/**
 * selection_sort -  function that sorts an array of integers in
 * ascending order using the Selection sort algorithm
 * @array: elements array
 * @size: size array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int aux, t, a = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		t = i;
		a = 1;
		aux = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[t])
				t = j, a = 0;
		}
		if (a == 0)
		{
			aux = array[t];
			array[t] = array[i];
			array[i] = aux;
			print_array(array, size);
		}
	}
}
