#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds
 * @argc: count
 * @argv: arrays
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
int s = 0, i;
char *c;

for (i = 1; i < argc; i++)
{
for (c = argv[i]; *c; c++)
{
if (*c > '9' || *c < '0')
return (printf("Error\n"), 1);
}
s = s + atoi(argv[i]);
}
printf("%d\n", s);
return (0);

}
