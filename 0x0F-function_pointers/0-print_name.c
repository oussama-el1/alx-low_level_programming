#include "main.h"

/**
 * print_name - function to print name
 * @f: function pointer
 * @name: name printed
 */

void print_name(char *name, void (*f)(char *))
{
f(name);
}
