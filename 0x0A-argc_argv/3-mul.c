#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 numbers.
 * @argc1: number of commandline arguments.
 * @argv1: pointer to an array of commandline arguments.
 * Return: 0-success, non-zero - fail.
 */

int main(int argc1, char *argv1[])
{
	int sum;

	if (argc1 == 3)
	{
		sum = atoi(argv1[1]) * atoi(argv1[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
