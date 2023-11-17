#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	pr_arr(array, n);
	printf("\n");
	merge_sort(array, n);
	printf("\n");
	pr_arr(array, n);
	return (0);
}
