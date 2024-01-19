#include "search_algos.h"


void
print_arr(int *array, int left, int right)
{
	int i = left;

	while (array && i <= right)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

int
b_search(int *array, int left, int right, int value)
{
	int mid = left + (right - left) / 2;

	if (left > right)
		return (-1);

	print_arr(array, left, right);
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (b_search(array, left, mid - 1, value));
	else
		return (b_search(array, mid + 1, right, value));

}

int
binary_search(int *array, size_t size, int value)
{
	return (b_search(array, 0, size, value));
}

