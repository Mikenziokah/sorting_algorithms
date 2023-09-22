#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending
 * order using the Bubble sort algorithm
 * @array: Array of integers
 * @size: Size of the array
 * Return: Void - No return
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
