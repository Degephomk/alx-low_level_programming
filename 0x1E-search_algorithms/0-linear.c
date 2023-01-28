#include "search_algos.h"

/**
 * function that searches for a value in an array of integers using the Linear s
 * integers using the Linear search algorithm
 *
 * @array: input array
 * Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must return -1
 * Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
