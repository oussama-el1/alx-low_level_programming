#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{int l, i;

l = 0;
while (str[l] != '\0')
{
l++;
}
for (i = 0; i < l; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
