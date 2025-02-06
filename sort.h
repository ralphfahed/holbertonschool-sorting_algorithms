#ifndef SORT_H
#define SORT_H

#include <stddef.h>  /* For size_t */

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;            /**< Integer value stored in the node */
	struct listint_s *prev; /**< Pointer to the previous node in the list */
	struct listint_s *next; /**< Pointer to the next node in the list */
} listint_t;

/* Function declarations */

/**
 * print_list - Prints the elements of a doubly linked list
 * @list: Pointer to the first node in the list
 */
void print_list(const listint_t *list);

/**
 * print_array - Prints an array of integers
 * @array: Pointer to the array
 * @size: Size of the array
 */
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
#endif /* SORT_H */

