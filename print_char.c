#include "main.h"
/**
* print_char  -  function
* purpose: prints a character passed as a va_arg
*
* int print_char(va_list ptr)
*
* @ptr: pointer to the va_arg holding the character to be printed
* Return: the number of characters printed
*/
int print_char(va_list ptr)
{
	const char c = (char)va_arg(ptr, int);
	int value = 0;
	int count = 0;

	if (c)
	{
		value = write(1, &c, 1);
		count += value;
		return (count);
	}
	else
		return (-1);
}
