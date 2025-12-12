#include "sort.h"

/**
 * swap_nodes - swaps two nodes in doubly linked list
 *
 * @list: pointer to the head of the list
 * @node1: first node
 * @node2: seconde node
 *
 * Return: Nothing
 */

void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1 == NULL ||
	node2 == NULL ||
	node2->prev != node1)
		return;

	node1->next = node2->next;
	node2->prev = node1->prev;

	if (node1->prev != NULL)
		node1->prev->next = node2;

	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: the list to sort
 *
 * Return: Nothing
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *next_node;

	if (list == NULL ||
	*list == NULL ||
	(*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next_node = current->next;

		while (current->prev != NULL &&
		current->n < current->prev->n)
		{
			swap_nodes(list, current->prev, current);
			print_list(*list);
		}

		current = next_node;
	}
}
