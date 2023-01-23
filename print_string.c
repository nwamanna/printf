#include "main.h"
int print_string(va_list ptr)
{
	char *c = va_arg(ptr, char *);
	int value = 0;
	int count = 0;
	int i;
	if (c)
	{
		for (i = 0; c[i] != '\0'; i++)
		{
			value = write(1, &c[i], 1);
			count += value;
		}
		return (count);
	}
	else
		return (-1);
}
