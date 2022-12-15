#include "main.h"

/**
 * _isuper - check if letter is uppercase
 * @c: carrier of integer variable
 * Return: 1if true, 0 if false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	return (0);

