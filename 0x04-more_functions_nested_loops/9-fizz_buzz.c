#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * A program for fizz buzz
 * Return: 0 (successful)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 != 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0 && num % 3 != 0)
		{
			printf("Buzz");
		}
		else if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", num);
		}
		if (num != 0)
		{
		printf(" ");
		}
	}
	printf("\n");
	return (0);
}
