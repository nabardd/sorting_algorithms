#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the insertion sort algorithm
 *
 * @list: pointer to doubly linked list to be sorted
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	/* setting variables for pointer and temporary variable */
	listint_t *ptr, *tmp;

	/* check if list is empty */
	if (list == NULL)
		return;

	ptr = *list;

	while (ptr)
	{
		while (ptr->next && (ptr->n > ptr->next->n))
		{
			tmp = ptr->next;
			ptr->next = tmp->next;
			tmp->prev = ptr->prev;

			if (ptr->prev)
				ptr->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = ptr;
			ptr->prev = tmp;
			tmp->next = ptr;

			if (tmp->prev)
				ptr = tmp->prev;

			else
				*list = tmp;
			print_list(*list);
		}
	}
	ptr = ptr->next;
}
