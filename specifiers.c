#include "main.h"
/**
*specifier - selects the function needed
*@format: parameter
*
*Return: approiprate function
*/
int (*specifier(const char *format))(va_list)
{
	int i;
	struct special_case sp[6] = {
			{"c", print_char},
			{"%", print_pcent},
			{"s", print_string},
			{"i", print_int},
			{"d", print_dec},
			{NULL, NULL}};

	for (i = 0; sp[i].type != NULL; i++)
	{
		if (*(sp[i].type) == *format)
		{
			return (sp[i].func);
		}
	}
	return (0);
}
