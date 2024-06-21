#include "sort.h"
#include <stdio.h>
void shell_sort(int *array, size_t size)
{
    size_t gap = 1, i, j;
    int temp;

    while (gap < size / 3)
        gap = gap * 3 + 1;

    while (gap > 0)
    {
        printf("Gap %zu: ", gap);
        print_array(array, size);

        /* Do a gapped insertion sort for this gap size
