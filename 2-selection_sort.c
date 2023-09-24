#include "sort.h"
/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: Array of integers
 * @size: Size of the array
 *
 * Return: Vois - No return
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, index;
	int z;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		index = x;
		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[index])
				index = y;
		}
		if (index != x)
		{
			z = array[x];
			array[x] = array[index];
			array[index] = z;
			print_array(array, size);
		}
	}
}
