#include <stdio.h>
/**
 * main - entry point
 * a program that prints combination of two digits
 * Return: 0 (success)
 */

int main(void)
{
	int a;
	int b;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a < 8)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
