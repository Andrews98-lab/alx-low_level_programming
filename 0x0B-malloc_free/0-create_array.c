#include "main.h"

/**
 * create_array - create an array of chars, and
 * initializes it with a specific char
 * @size: size of an array
 * @c: Character to insert
 *Return: Null if size is zero or if it false
 *pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if(size == 0)
		return (NULL);
	array = malloc(sizeof(char) *size);

	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
