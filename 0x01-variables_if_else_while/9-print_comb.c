#include <stdio.h>
/**
 * main - entry point
 * a program to print combinations of a single number
 * Return: 0 (success)
 */

int main(void)
{
	int king;

	king = 0;
	while (king < 10)
	{
		putchar('0' + king);
		if (king < 9)
		{
			putchar(',');
			putchar(' ');
		}
		king++;
	}
	putchar('\n');
	return (0);
}
