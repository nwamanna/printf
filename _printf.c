#include "main.h"
/**
*_printf - prints variables to output
*@format: parameter
*
*Return: Number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, count = 0, value  = 0;
	int (*function)(va_list);
	va_list ptr;

	va_start(ptr, format);

	if (format == NULL)
		exit(98);
	while (format[i])
	{
		if (format[i] != '%')
		{
			value = write(1, &format[i], 1);
			count += value;
			i++;
			continue;
		}
		if (format[i] == '%')
		{
			function = specifier(&format[i + 1]);
			if (function != NULL)
			{
				value = function(ptr);
				count += value;
				i = i + 2;
				continue;
			}
			if (format[i + 1] == '\0')
				break;
			if (format[i + 1] != '\0')
			{
				value = write(1, &format[i + 1], 1);
				count += value;
				i = i + 2;
				continue;
			}
		}
	}
	return (count);
}
