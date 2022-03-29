#include "function_pointers.h"
/**
*array_iterator - function that executes a function
*@array: nubers array
*@size: size
*@action: function name
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		exit(EXIT_SUCCESS);

	for (a = 0; a < size; a++)
		action(array[a]);
}
