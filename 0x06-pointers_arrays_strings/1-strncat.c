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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
