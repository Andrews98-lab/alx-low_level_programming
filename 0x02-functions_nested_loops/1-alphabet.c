#include"main.h"

/**
 * print alphbert using _putchar function
 *
 * */

void print_alphabet(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
