#include"main.h"

/**
 * print_alphabet - Entry point
 * Description a function to print alphabet
 * Return 0 (Success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
