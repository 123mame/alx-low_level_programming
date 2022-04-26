#include "lists.h"

/**
 * print_listint_safe - prints a linked list, safely
 * @head: list of type listint_t to print
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (num);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 * exit with status 98 if function fails.
 **/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow, *fast;
	int nodes = 0;

	slow = head, fast = head;

	if (head == NULL)
	{
		exit(98);
	}
	if (detectLoop(head) == 1)
	{
		while (fast != NULL && fast->next != NULL)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			slow = slow->next;
			fast = fast->next->next;
			nodes++;
			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
					printf("[%p] %d\n", (void *)fast, fast->n);
					slow = slow->next, fast = fast->next, nodes++;
				}
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				return (nodes);
			}
		}
		exit(98);
	}
	else
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next, nodes++;
		}
		return (nodes);
	}
}
