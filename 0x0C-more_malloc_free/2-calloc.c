#include "main.h"
/**
 * _calloc - allcocate memory using malloc and initialize it to zero
 * @nmemb: number of element
 * Return: pointer tothe address of memory block
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mb;
	unsigned int i;

	if(nmemb == 0 || size == 0)
		return (NULL);
	mb = malloc(nmemb *size);
	if(mb != NULL)
	{
		for(i = 0; i < (nmemb * size); i++)
			mb[i] = 0;
		return (mb)

	}
	else
		return (NULL);

}

