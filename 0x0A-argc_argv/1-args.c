#include <stdio.h>

/**
 * main - print number of arguments passed.
 * @argc1: number of command line arguments.
 * @argv1: pointer to an array of command line arguments.
 * Return: 0-success, non-zero-fail.
 */

int main(int argc1, char *argv1[] __attribute__((unused)))
{
	printf("%d\n", argc1 - 1);
	return (0);
}
