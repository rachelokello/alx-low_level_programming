#include "main.h"
#include <string.h>

/**
 * _memset - fills memory with constant byte
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spcaes to fill
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

