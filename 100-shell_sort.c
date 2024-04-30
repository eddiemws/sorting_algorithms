#include "sort.h"
#include <stdio.h>

/**
 * shell_sort - Sorts an array of integers in ascending order
 *              using the Shell sort algorithm with Knuth sequence.
 * @array: The array to be sorted
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    /* Calculate initial gap using Knuth sequence */
    while (gap < size / 3)
        gap = gap * 3 + 1;

    /* Start with the largest gap and reduce the gap */
    while (gap > 0)
    {
        printf("Gap %zu: ", gap);
        print_array(array, size);

        /* Do a gapped insertion sort for this gap size
