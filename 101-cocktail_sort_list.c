#include "sort.h"
#include <stdio.h>

/**
 * cocktail_sort_list - Sorts a doubly linked list of integers
 *                      in ascending order using the Cocktail Shaker Sort
 *                      algorithm.
 * @list: A pointer to a pointer to the head of the list
 */
void cocktail_sort_list(listint_t **list)
{
    int swapped = 1;
    listint_t *tmp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

   
        }
        if (!swapped)
            break;
        swapped = 0;
        /* Backward iteration */
        for (; tmp->prev != NULL; tmp = tmp->prev)
        {
            if (tmp->n < tmp->prev->n)
            {
                if (tmp->next != NULL)
                    tmp->next->prev = tmp->prev;
                tmp->prev->next = tmp->next;
                tmp->next = tmp->prev;
                tmp->prev = tmp->prev->prev;
                tmp->next->prev = tmp;
                if (tmp->prev != NULL)
                    tmp->prev->next = tmp;
                else
                    *list = tmp;
                swapped = 1;
                printf("\n");
                print_list(*list);
            }
        }
    }
}
