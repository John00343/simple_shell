#include "shell.h"

/**
 * bfree - Frees Pointer & NULLs the address
 * @ptr: address of the pointer to free
 *
 * Return: 1 if freed, ELSE 0.
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
