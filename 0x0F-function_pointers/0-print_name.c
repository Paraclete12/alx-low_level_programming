#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name:The name
 * @f: function pointer
 * Return: void
 * Date: 22-03-2023
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
