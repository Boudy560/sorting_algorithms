#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listN_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listN_s
{
	const int n;
	struct listN_s *prev;
	struct listN_s *next;
} listN_tT;

void bubb_sor(int *array, size_t size);
void pr_arr(const int *array, size_t size);
void pri_li(const listN_tT *list);
listN_tT *swap_no(listN_tT *node, listN_tT **list);
void ins_sor_li(listN_tT **list);
void sele_so(int *array, size_t size);
void quick_sort_quik(int *array, size_t size);
void she_so(int *array, size_t size);
void coc_so_li(listN_tT **list);
void con_so(int *array, size_t size);
void mer_so(int *array, size_t size);
void he_so(int *array, size_t size);
void ra_so(int *array, size_t size);
void bit_so(int *array, size_t size);
void qu_so_ho(int *array, size_t size);

#endif
