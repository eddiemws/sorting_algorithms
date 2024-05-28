#include <stdio.h>
#include <stdlib.h>

/**
 * count_sort - sorts the array based on the specified digit
 * @arr: the array to be sorted
 * @size: the size of the array
 * @exp: the digit to sort by (place value)
 * @output: a temporary array to store the sorted elements
 */


/**
 * radix_sort - sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 */
void radix_sort(int *array, size_t size) {
    int *output = malloc(size * sizeof(int));  // Temporary array
    int max = array[0];
    int exp;

    // Find the maximum element to determine number of significant digits
    for (int i = 1; i < size; i++)
        if (array[i] > max)
            max = array[i];

    // Do LSD radix sort for every digit (place value)
    for (exp = 1; max / exp > 0; exp *= 10) {
        count_sort(array, size, exp, output);

        // Print the array after sorting by current digit
        printf("After sorting by place value %d: ", exp);
        for (int i = 0; i < size; i++)
            printf("%d, ", array[i]);
        printf("\n");
    }

    free(output);  // Free the temporary array
}
