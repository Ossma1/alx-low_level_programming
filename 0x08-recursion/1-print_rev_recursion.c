#include "main.h"
/**
 * on va return the inverse of this string
 */
void _print_rev_recursion(char *s)
{
	if(*s)
	{
	_print_rev_recursion(s+1);
	_putchar(*s);
	}
}
