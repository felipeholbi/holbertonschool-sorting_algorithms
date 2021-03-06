#ifndef _SORT_H_
#define _SORT_H_
/*libraries*/
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/*Protoypes*/
void bubble_sort(int *array, size_t size);
void swap(int *back, int *front);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap(int *left, int *right);
void selection_sort(int *array, size_t size);
size_t partition(int *array, ssize_t low, ssize_t high, size_t size);
void q_sort(int *array, ssize_t low, ssize_t high, size_t size);
void quick_sort(int *array, size_t size);
#endif /*_SORT_H_*/
