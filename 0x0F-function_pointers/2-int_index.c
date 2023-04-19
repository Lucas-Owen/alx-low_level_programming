/**
 * int_index - Searches for an integer in an array
 * based on a custom function
 * @array: The array
 * @size: Size of the array
 * @cmp: Compare function
 * Return: The index of integer if found, else (-1)
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	while (size > 0)
	{
		size--;
		if (cmp(array[size]))
			return size;
	}
	return -1;
}