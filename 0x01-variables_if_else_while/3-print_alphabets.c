#include <stdio.h>
/**
 * main - entry point
 * a program to check if a number is positive, negative or equal zero
 * Return: 0 (success)
 */

int main(void)
{
	char letters;
	char alph;

	letters = 'a';
	alph = 'A';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
