#include <stdio.h>
#include <unistd.h>
#include <string.h>
/**
 * main - entry point
 * A program to print without using printf or put function
 * Return: 1 (success)
 */

int main(void)
{
	char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	int le = strlen(msg);

	write(STDOUT_FILENO, msg, le);
	return (1);
}
