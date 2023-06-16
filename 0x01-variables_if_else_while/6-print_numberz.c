#include <stdio.h>
/**
 * main - entry point
 * a program to print numbers using putchar
 * Return: 0 (success);
 */

int main(void)
{
	int numb;

	numb = 0;
	while (numb < 10)
	{
		char letter = '0' + numb;

		putchar(letter);
		numb++;
	}
	putchar('\n');
	return (0);
}
