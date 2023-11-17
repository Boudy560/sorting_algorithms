#include <stdio.h>
#include "sort.h"

/**
 * pri_li - Prints a list of integers
 *
 * @list: The list to be printed
 */
void pri_li(const listN_tT *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}
