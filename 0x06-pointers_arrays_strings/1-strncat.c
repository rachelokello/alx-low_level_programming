/*
 * file: 1-strncat.c
 * auth: brennan D Baraban
 */

#include "main.h"

/**
 * _strncat - concatenates two strings using at most an inputted number of bytes from src.
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest.
 *
 * Return: a poinetr to the resul;ting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, i;
for (dest_len = 0; dest[dest_len] != '\0'; dest_len++);

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[dest_len + i] = src[i];

/*should end with a end of string char*/
dest[dest_len + i} = '\0';

return (dest);
}
			}
