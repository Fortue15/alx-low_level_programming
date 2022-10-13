/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in array
 * @cmp: pointer to functions used to compare values
 *
 * Return: index of first element
 * -1 if no element is found or siz <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-i)))
			{
				return (res);
			}
		}
	}
	return (res);
}
