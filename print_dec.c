#include "main.h"
/**
*print_dec - prints out decimal numbers
*@ptr: va_list pointer
*
*Return: Count of characters printed
*/
int print_dec(va_list ptr)
{
	int number;
	int i = 0;
	int array[10];
	int count = 0;
	char c[1];
	/* assigns variadic parameter to number*/
	number = va_arg(ptr, int);

	while (number != 0)
	{
		array[i] = number % 10;
		number = number / 10;
		if (number == 0)
		{
			break;
		}
		else
			i++;
	}
	while (i >= 0)
	{
		c[0] = (array[i] + '0');
		count += write(1, c, 1);
		i--;

	}
	return (count);
}
