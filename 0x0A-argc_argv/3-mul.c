#include <stdio.h>
#include <stdlib.h>

/**
 * main: multiplucation
 * @argc: count
 * @argv: arrays
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc == 3)
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
else
printf("Error\n");
return (0);
}
