#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searching in a O(n/m + (m-1)) time
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: if the number isn't in the array or null, -1.
 *         otherwise, the first index where the value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump > size - 1)
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);

	return (-1);
}

