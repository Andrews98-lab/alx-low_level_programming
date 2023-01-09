#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments passed into main
 * @argc: Number of comand line agumment
 * @argv: Array name
 * Return 0
 */

int main(int argc, char *argv[])
{
	int i;
	for(i = 0; i < argc; i++)
	print("%s\n", argv[i]);

	return 0;
}

