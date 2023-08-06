#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints coins
 * @argc: num
 * @argv: array
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int n, j, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	result = 0;

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && n >= 0; j++)
	{
		while (n >= coins[j])
		{
			result++;
			n -= coins[j];
		}
	}

	printf("%d\n", result);
	return (0);
}
