#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int));
/**
 * @size: size of te array
 * @action: pointer to the function in use
 *
 * Return: nothing
 */

