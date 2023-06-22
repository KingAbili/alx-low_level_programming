#include "main.h"

/**
 * positive_or_negative - entry point
 * a program to check if a number is positive, negative or equal zero
 * Return: void (success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
