#include <stdio.h>

/**
 * main - number of arg
 * @argc: counter
 * @argv: argument passed
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)**argv;
printf("%d\n", argc - 1);
return (0);
}
