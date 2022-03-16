#include "function_pointers.h"
#include <stdlib.h>

/**
*int_index -  function that searches for an integer
*@array: function name
*@size: size
*@cmp: comparation function
*Return: if size <= 0, return -1
*if  no element matches, return -1
*otherwise return index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
