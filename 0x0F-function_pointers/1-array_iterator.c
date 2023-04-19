#include <stddef.h>
/**
 * array_iterator - Executes a function given as a parameter on elements
 * of an array
 * @array: An array to be traversed
 * @size: Size of the array
 * @action: Function parameter to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
