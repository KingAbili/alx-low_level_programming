#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * Return: 0 (successful)
 */

int main(void)
{
	long numb, fac;
	long numb1 = 612852475143;

	double les = sqrt(numb1);

	for (numb = 1; numb <= les; numb++)
	{
		if (numb1 % numb == 0)
		{
			fac = numb1 / numb;
		}
	}
	printf("%ld\n", fac);
	return (0);
}
