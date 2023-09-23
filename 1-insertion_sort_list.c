#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: list to be sorted
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node = NULL, *first = NULL, *second = NULL, *tmp = NULL;
	int x = 0;

	if (!list || !*list)
		return;

	tmp = *list;

	while (tmp)
	{
		if (tmp->prev != NULL)
		{
			node = tmp;
			x = 0;
			while (node && node->prev->n > node->n)
			{
				first = node->prev;
				second = node->next;

				if (first->prev)
					first->prev->next = node;
				else
				{
					*list = node;
					x = 1;
				}
				if (second)
					second->prev = first;

				node->prev = first->prev;
				node->next = first;
				first->prev = node;
				first->next = second;
				print_list(*list);
				if (x)
					break;
			}
		}
		tmp = tmp->next;
	}
}
