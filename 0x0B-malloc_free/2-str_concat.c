#include "main.h"

/**
 * *str_concat - concatination of two string
 * @s1: string first
 * @s2: string second
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
char *str;
int l1 = 0, l2 = 0, i, j = 0;

while (s1 && s1[l1])
l1++;
while (s2 && s2[l2])
l2++;

str = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
if (str == NULL)
return (NULL);
for (i = 0; i < (l1 + l2); i++)
{
if (i < l1)
str[i] = s1[i];
else
str[i] = s2[j++];
}
str[i] = '\0';
return (str);
}
