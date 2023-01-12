#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc.
 * @b: The number of byte to allocate.
 *
 * Return: A pointer to allocate Memory.
 */

void *malloc_checked(unsigned int b)
{
	void *and = malloc(b);

	if (and == NULL)
		exit(98);

	return(and);
}

