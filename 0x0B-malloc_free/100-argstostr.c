#include "main.h"

/**
 * argstostr - concatination of arguments
 * @ac:counter
 * @av: arguments array
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, l = 0, j, k;
if (ac == 0 || av == NULL)
	return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j] != '\0')
{
l++;
j++;
}
}
str = (char *) malloc(sizeof(char) * (l + ac));
if (str == NULL)
{
return (NULL);
}
i = 0;
j = 0;
k = 0;
while (k < (l + ac))
{
while (av[i][j] != '\0')
{
str[k] = av[i][j];
j++;
k++;
}
if (av[i][j] == '\0')
{
str[k++] = '\n';
i++;
j = 0;
}
}
str[k] = '\0';
return (str);
}
