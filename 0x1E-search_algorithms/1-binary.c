#include "search_algos.h"

/**
 * binary_search - searching in a logN time
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: if the number isn't in the array or null, -1.
 *         otherwise, the first index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t right = size - 1;
	size_t left = 0;
	size_t mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (right - left) / 2 + left;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}

	return (-1);
}

