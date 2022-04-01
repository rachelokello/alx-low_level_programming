#include <stdio.h>
/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments passed to the function
 *@argv: argument vector of pointers to strings
 *
 * Returns: 0 - success
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
