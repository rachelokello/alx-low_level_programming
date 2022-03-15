#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * main - prints _putchar followed by a newline
 *
 * Return: if runs successfully return 0
 */
int main(void)
{
	char str[] = {95, 112, 117, 116, 99, 104 97, 114};
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
