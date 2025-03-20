#include "lists.h"
/**
 * print_list - function that prints all the elements of a list
 * @h : the list
 * @*h : pointer to the list
 */
size_t print_list(const list_t *h)
{

	size_t i;
	while (h != NULL)
	{
		i++;
		h = h -> next;
	}

	if (h == NULL)
	{
		printf("[0] (nil)\n");
	}
	printf("%u", h -> len);
	printf("%s", h -> str);

	return (i);
}
