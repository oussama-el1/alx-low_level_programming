#include <stdio.h>
/**
 * main -task inverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';

while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
