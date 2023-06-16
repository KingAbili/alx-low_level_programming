#include <stdio.h>
/**
 * main - entry point
 * a program to print alphabets except e and q
 * Return: 0 (success)
 */

int main(void)
{
	char alph;

	alph = 'a';

	while (alph <= 'z')
	{
		if (alph != 'e' && alph != 'q')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
