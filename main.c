#include "main.h"
/**
* main - entry point
* purpose: entry point for the program
*
* Return: 0 for successful execution
*/
int main(void)
{
	int count_std = 0;
	int count_hmd = 0;

	write(1, "STANDARD:\n", 10);
	count_std = printf("String:[%s]\n", "I am a string !");
	printf("i printed %d characters", count_std);
	write(1, "_________________________\n", 26);
	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("String:[%s]\n", "I am a string !");
	printf("i printed %d characters", count_hmd);
	return (0);
}
