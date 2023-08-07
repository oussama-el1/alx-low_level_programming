#include "main.h"

/**
 * *create_array - function
 * @c:char
 * @size:the size of arrays
 * Return: always pointer to an char
 */
char *create_array(unsigned int size, char c)
{char *str;
unsigned int i = 0;

if (size == 0)
return (NULL);
str = (char *) malloc(sizeof(char) * size);
if (str == NULL)
return (0);
while (i < size)
{
str[i] = c;
i++;
}
return (str);
}
