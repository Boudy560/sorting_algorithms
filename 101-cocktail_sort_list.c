#include "sort.h"
#include <stdio.h>
/**
 *swap_no - swap a node for his previous one
 *@node: node
 *@list: node list
 *Return: return a pointer to a node which was enter it
 */
listN_tT *swap_no(listN_tT *node, listN_tT **list)
{
	listN_tT *back = node->prev, *current = node;
	/*NULL, 19, 48, 9, 71, 13, NULL*/

	back->next = current->next;
	if (current->next)
		current->next->prev = back;
	current->next = back;
	current->prev = back->prev;
	back->prev = current;
	if (current->prev)
		current->prev->next = current;
	else
		*list = current;
	return (current);
}
/**
 *coc_so_li - this is a cocktail sort implementation
 *working on a double linked lists
 *@list: list
 */
void coc_so_li(listN_tT **list)
{
	listN_tT *node;
	int swap_done = 1;

	if (list == '\0' || (*list) == '\0' || (*list)->next == '\0')
		return;
	node = *list;
	while (swap_done == 1)
	{
		swap_done = 0;
		while (node->next)
		{
			if (node->n > node->next->n)
			{
				node = swap_no(node->next, list);
				swap_done = 1;
				pri_li(*list);
			}
			node = node->next;
		}
		if (swap_done == 0)
			break;
		swap_done = 0;
		while (node->prev)
		{
			if (node->n < node->prev->n)
			{
				node = swap_no(node, list);
				swap_done = 1;
				pri_li(*list);
			}
			else
				node = node->prev;
		}
	}
}
