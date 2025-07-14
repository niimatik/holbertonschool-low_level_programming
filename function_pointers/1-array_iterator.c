#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - execute a function on an array
  * @array: the array
  * @size: the size of an array
  * @action: the function to execute
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
