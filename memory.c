#include "shell.h"

/**
 * bfree - frees a Pointer and NULLS THE Address
 * @ptr: Address of the pointer to free
 *
 * Return: 1 If freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
