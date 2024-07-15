#include "search_algos.h"

/**
 * exponential_search - searching using exponential search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: if the number isn't in the array or null, -1.
 *         otherwise, the first index where the value is located.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	mid = 1;
	while (mid < size && array[mid] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		mid *= 2;
	}

	right = (mid < size) ? mid : size - 1;
	left = mid / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

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

