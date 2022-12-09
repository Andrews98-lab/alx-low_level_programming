#include <stdio.h>

/**
 * main - prints the numerals 0 to 9
 *
 * Return: always
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	
	putchar('/n');
	
	return(0);
}

