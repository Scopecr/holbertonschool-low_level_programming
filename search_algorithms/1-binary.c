#include "search_algos.h"
void print_array(int *array, size_t i, size_t size);

/**
 * binary_search - binary search algorithm in a string
 * @array: list of elements
 * @size: size of the list
 * @value: target to search
 * Return: element index on success (-1) on fail
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid = 0, i = 0;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = (left + right) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
