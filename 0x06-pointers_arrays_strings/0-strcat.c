#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
char c;
int  i, j, l1, l2;

i = 0;
while (dest[i] != '\0')
{
i++;
}
l1 = i;
j = 0;
while (src[j] != '\0')
{
j++;
}
l2 = j;
j = 0;
for (i = l1 ; i < l2 + l1; i++)
{
dest[i] = src[j];
j++;
}
dest[i] = '\0';
return (dest);
}
