#include "search_algos.h"

/**
  * linear_search - searching in a linear time
  * 
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: if the number isn't in the array or null, -1.
  *         otherwise, the first index where the value is located.
  */

int linear_search(int *array, size_t size, int value) {
        size_t i;

        if (array == NULL) 
                return (-1);

        for (i = 0; i < size; i++) {
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                if (array[i] == value) 
                        return (i);
        }

        return (-1);
}
