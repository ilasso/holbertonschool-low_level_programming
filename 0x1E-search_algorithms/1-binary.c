#include "search_algos.h"
/**
 *display - print to stdout array and subarray
 *@array: pointer to the array or subarray
 *@inic: inic position array
 *@end: last position array
 */
void display(int *array, size_t inic, size_t end)
{
	size_t i = inic;

	printf("Searching in array: ");
	while (i <= end)
	{
		printf("%i", array[i]);
		if (i != end)
			printf(", ");
		else
			printf("\n");
		i++;
	}
}

/**
 *search - recursive function to search value
 *@array: pointer to inic array position
 *@inic: start idx position array
 *@end: end idx position array
 *@value: value to find
 *
 *Return: return -1 if not found
 */
int search(int *array, size_t inic, size_t end, int value)
{
	size_t mid;

	mid = (inic + end) / 2;

	if (inic > end)
		return (-1);

	display(array, inic, end);


	if (array[mid] > value)
		return (search(array, inic, mid - 1, value));

	if (array[mid] < value)
		return (search(array, mid + 1, end, value));

	if (array[mid] == value)
		return (mid);

	return (-1);
}

/**
*binary_search - searches for a value in a sorted array of integers
*                using the Binary search algorithm
*@array: pointer to array
*@size: array size
*@value: value to find
*
*Return: index where the value was found
*/
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (search(array, 0, size - 1, value));
}
