#include <unistd.h>
#include "main.h"

/**
 * main - Enrty point
 *
 * print_alphabet_ a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
		_putchar('\n');
	}
return (0);
}
