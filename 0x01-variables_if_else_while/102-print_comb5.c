#include <stdio.h>
/**
 * main - entry point
 * a program that prints combinations, this program burst my head
 * Return: 0 (success)
 */

int main(void)
{
	int a, b, c, d;
	a = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = a;
			while (c < 10)
			{
				if (c <= a)
				{
					d = b + 1;
				}
				else if (c > a)
				{
					d = 0;
				}
				while (d < 10)
				{
		
					putchar('0' + a);
					putchar('0' + b);
					putchar(' ');
					putchar('0' + c);
					putchar('0' + d);
					if (a < 9 || b < 8)
					{
						putchar(',');
						putchar(' ');
					}
					d++;
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
