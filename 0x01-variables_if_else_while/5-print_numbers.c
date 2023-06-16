#include <stdio.h>
/**
 * main - entry point
 * a program that prints values
 * Return: 0 (success)
 */

int main(void)
{
	int numb;

	numb = 0;

	while (numb < 10)
	{
		printf("%d", numb);
		numb++;
	}
	printf("\n");
	return (0);
}
