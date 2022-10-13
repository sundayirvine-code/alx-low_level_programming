#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name give
 * @name: name given to print
 * @(*f)(char *): pointer toba function
 *
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
