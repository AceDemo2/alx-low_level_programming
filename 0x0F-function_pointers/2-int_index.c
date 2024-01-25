#include "function_pointers.h"

/**
  * int_index - ...
  * @array: ...
  * @size: ...
  * @cmp: ...
  *
  * Return: ...
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array)
		return (-1);
	if (array)
	{
		while(i < size)
		{
			if (cmp(array[i]))
				break;
			i++;
		}
		return (i);
	}
	if (!array[i])
		pass;
	return (-1);
}
