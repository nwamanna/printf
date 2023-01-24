#include "main.h"
/**
*print_int - prints out decimal numbers
*@ptr: va_list pointer
*
*Return: Count of characters printed
*/
int print_int(va_list ptr)
{
	int number, num;
	int i = 0;
	int array[10];
	int count = 0;
	char c[1];
	/* assigns variadic parameter to number*/
	number = va_arg(ptr, int);

	if (number < 0)
	{
		num = -number;
	}
	else
	{
		num = number;
	}
	while (num != 0)
	{
		array[i] = num % 10;
		num = num / 10;
		if (num == 0)
		{
			break;
		}
		else
			i++;
	}
	if (number < 0)
	{
		count += write(1, "-", 1);
	}
	while (i >= 0)
	{
		c[0] = (array[i] + '0');
		count += write(1, c, 1);
		i--;

	}
	return (count);
}
