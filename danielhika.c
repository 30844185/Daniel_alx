#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 w/
 * Daniel for multiples of 3, Hika for multiples of 5,
 * and DanielHika for multiples of both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("DanielHika");
		else if (i % 3 == 0)
			printf("Daniel");
		else if (i % 5 == 0)
			printf("Hika");
		else
			printf("%i", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
