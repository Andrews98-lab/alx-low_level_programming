#include"main.h"

/**
 * Print_alphabet_x10 - Entry point
 * Description - print the alphabet 10 times
 * Return 0
*/

void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; ++line)
	{
		for (ch = 'a'; ch <= 'z'; ++ch)
			_putchar(ch);
		_putchar('\n');
	}
}
