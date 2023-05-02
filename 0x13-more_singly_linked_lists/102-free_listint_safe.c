#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	ptrdiff_t diff;
	listint_t *temp, *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		current = *h;
		diff = (char *)current - (char *)current->next;
		if (diff > 0)
		{
			temp = current->next;
			free(current);
			*h = temp;
			len++;
		}
		else
		{
			free(current);
			*h = NULL;
			len++;
			break;
		}
	}

	return (len);
}
