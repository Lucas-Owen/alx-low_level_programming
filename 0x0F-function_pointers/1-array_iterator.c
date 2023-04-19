/**
 * array_iterator - Executes a function given as a parameter on elements
 * of an array
 * @array: An array to be traversed
 * @size: Size of the array
 * @action: Function parameter to be executed
 * @Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size > 0)
	{
		size--;
		action(array[size]);
	}
}