#include <stdio.h>
/**
 * main - prints name
 * @argc: counter
 * @argv: pointer to an pointer
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
(void)argc;
printf("%s\n", *argv);
return (0);
}
