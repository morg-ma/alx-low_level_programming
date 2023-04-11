#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc1: int
 * @argv1: list
 * Return: 0
 */

int main(int argc1, char const *argv1[])
{
	int j = 0;

	while (argc1--)
	{
		printf("%s\n", argv1[j]);
		j++;
	}
	return (0);
}
