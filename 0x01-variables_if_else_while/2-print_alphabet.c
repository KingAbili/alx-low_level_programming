#include <stdio.h>
/**
 * main - entry point
 * a program to check if a number is positive, negative or equal zero
 * Return: 0 (success)
 */

int main(void)
{
	char letters;

	letters = 'a';

	while (letters <= 'z')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');
	return (0);
}
