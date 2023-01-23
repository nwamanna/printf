#include "main.h"
/**
*print_pcent - prints % to output
*@ptr: ...
*Return: count of character printed
*/
int print_pcent(va_list ptr)
{
	int d = '%';
	int value = 0;
	int count = 0;
	(void)ptr;

	if (d)
	{
		value = write(1, &d, 1);
		count += value;
		return (count);
	}
	else
		return (-1);
}
