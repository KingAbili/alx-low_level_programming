#include <stdio.h>
/**
 * main - entry point
 * a program to checkto prints alphabet from z
 * Return: 0 (success)
 */

int main(void)
{
	char letters;

	letters = 'z';

	while (letters >= 'a')
	{
		putchar(letters);
		letters--;
	}
	putchar('\n');
	return (0);
}
