#include "main.h"
#include <stdio.h>

/**
 * main - entry, number of args
 * @argc: argument
 * @argv: vector
 * Return: 0 successful
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
