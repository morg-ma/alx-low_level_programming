#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lastD = n % 10;
	if (lastD > 5)
	{
	printf("%d and is greater than 5\n", lastD);
	}
	else if (lastD == 0)
	{
	printf("%d and is 0\n", lastD);
	}
	else if (lastD < 6 && lastD != 0)
	{
	printf("%d and is less than 6 and not 0\n", lastD);
	}
	return (0);
}
