#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @c: occurrence of the character
 *
 * @s: in the string
 *
 * Return: a pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
int i, l, j, cpp;

l = 0;
while (s[i] != '\0')
{
l++;
}
for (i = 0; i < l; i++)
{
if (s[i] == c)
{
j = i;
cpp = 0;
while (s[j] = '\0')
{
s[cpp] = s [j];
}
}
return (s);
}
}
