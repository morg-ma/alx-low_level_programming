#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int byt, j;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (j = 0; j < byt; j++)
	{
		if (j == byt - 1)
		{
			printf("%02hhx\n", ar[j]);
			break;
		}
		printf("%02hhx ", ar[j]);
	}
	return (0);
}
