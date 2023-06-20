#include "main.h"
/**
 *remplire la chaine s avec un nombre specidier caracter
 * @s: la memoire va etre remplir
 * @b: la valeur qui nous stocker dans s
 * @n: nomber de byte 
 * return : adress of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
