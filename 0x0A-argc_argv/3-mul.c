#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry, multiply args
 * @argc: argument
 * @argv: vector
 * Return: 0 or 1 successful
 */
int main(int argc, char *argv[])
{
	int a, b;

	a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
