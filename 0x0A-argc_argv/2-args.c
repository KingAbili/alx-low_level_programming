#include "main.h"
#include <stdio.h>

/**
 * main - entry, print args
 * @argc: argument
 * @argv: vector
 * Return: 0 successful
 */

int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
