#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in ascending
 * order using the Insertion sort algorithm.
 * @list: A pointer to the head of the doubly linked list.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *key, *temp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;
	while (current)
	{
		key = current;
		while (key && key->prev && key->n < key->prev->n)
		{
			/* Swap nodes by adjusting their pointers */
			temp = key->prev;
			if (key->next)
				key->next->prev = temp;
			temp->next = key->next;
			key->prev = temp->prev;

			if (temp->prev)
				temp->prev->next = key;
			else
				*list = key;
			key->next = temp;
			temp->prev = key;

			print_list(*list);
		}
		current = current->next;
	}
}

