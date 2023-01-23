#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);
/**
*struct special_case - holds functions and special cases
*@type: type of variable
*@func: function to return
*/
struct special_case
{
char *type;
int (*func)(va_list);
};
int print_char(va_list ptr);
int print_pcent(va_list ptr);
int print_string(va_list ptr);
int print_int(va_list ptr);
int print_dec(va_list ptr);


#endif
