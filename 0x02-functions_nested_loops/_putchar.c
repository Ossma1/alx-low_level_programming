#include <unistd.h>
#include "main.h"
/**
 * _putchar - write is a function for output Basic Command
 *e in unistd.h
 * &c to print 
 * return :1 in succes
 * return -1 in a erreur 
 * */

int _putchar(char c)
{
	return (write(1,&c,1));
}
