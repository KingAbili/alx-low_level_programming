#include <stdio.h>
/**
 * main - entry point
 * A program that prints hexadecimal numbers
 * Return: 0 (success)
 */

int main(void)
{
	int numb;

	numb = 0;
	while (numb <= 15)
	{
		if (numb < 10)
		{
			putchar('0' + numb);
		}
		else
		{
			putchar('a' + (numb - 10));
		}
		numb++;
	}
	putchar('\n');
	return (0);
}
