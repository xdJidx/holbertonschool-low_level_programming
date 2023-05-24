#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_search - searches value in sorted array of integers using the Binary
 * @array:  pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: If value is not present in array or if array is NULL return -1
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int i, mid, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i != high)
			{
				printf(", ");
			}
		}

	printf("\n");

	mid = (low + high) / 2;

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		low = mid + 1;
	}
	else
	{
		high = mid - 1;
	}

	}
	return (-1);  /* Value not found */
}

