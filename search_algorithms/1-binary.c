#include "search_algos.h"
/**
 * binary_search - binary search algorithm in a string
 * @array: list of elements
 * @size: size of the list
 * @value: target to search
 * Return: element index on success (-1) on fail
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, half = 0;

	if (array == NULL || value == 0)
		return (-1);

	printf(array, low, size);
	while (low < high)
	{
		half = (low + high) / 2;
		if (array[half] < value)
		{
			low = half + 1;
			print_array(array, low, high + 1);
		}
		else if (array[half] > value)
		{
			high = half - 1;
			print_array(array, low, high + 1);
		}
		else
			return (array[half]);
	}
	return (-1);
}
