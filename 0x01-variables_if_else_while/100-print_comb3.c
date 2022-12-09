#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 *           combinations of two digits.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0, c;

	while (i <= 9)
	{
		c = 0;
		while (c <= 9)
		{
			if (i != c && i < c)
			{
				putchar(i + 48);
				putchar(c + 48);

				if (i + c != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++c;
		}
		++i;
	}
	putchar('\n');

	return (0);
}
