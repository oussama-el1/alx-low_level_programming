#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplucation
 * @argc: count
 * @argv: arrays
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
