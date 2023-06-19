#include <stdio.h>
/**
 * main - entry point
 * A program that prints numbers in random
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c;

	a = 0;
	while (a < 10)
	{
		b = a + 1;
		while (b < 10)
		{
			c = b + 1;
			while (c < 10)
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar('0' + c);
				if (a < 7)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
