#include "main.h"

/**
 * *_strdup - function for duplicate;
 * @str: string to duplcate
 * Return: always ponter
 */
char *_strdup(char *str)
{
char *c;
int i = 0, l = 0;

if (str == NULL)
return (NULL);
while (str[i] != '\0')
{
l++;
i++;
}
c = (char *) malloc(sizeof(char) * (l + 1));
if (c == NULL)
return (NULL);
i = 0;
while (i <= l)
{
*(c + i) = str[i];
i++;
}
return (c);
}
