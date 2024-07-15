#include "search_algos.h"

/**
 * binary_search2 - searching in a logN time
 * @array: A pointer to the first element of the array to search.
 * @left: The starting index of the [sub]array to search.
 * @right: The ending index of the [sub]array to search.
 * @value: The value to search for.
 *
 * Return: if the number isn't in the array or null, -1.
 *         otherwise, the first index where the value is located.
 */
int binary_search2(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);
	printf("%d\n", array[mid]);

	mid = (right - left) / 2 + left;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	else if (array[mid] >= value)
		return (binary_search2(array, left, mid, value));
	return (binary_search2(array, mid + 1, right, value));
}

/**
 * advanced_binary - searching in a logN time
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: if the number isn't in the array or null, -1.
 *         otherwise, the first index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_search2(array, 0, size - 1, value));
}

