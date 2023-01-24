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
	count_std = printf("My name starts with: %d, %i\n", -56794, -56794);
	printf("I printed %d characters\n", count_std);
	write(1, "_________________________\n", 26);
	write(1, "HOME_MADE:\n", 11);
	count_hmd = _printf("My name starts with: %d, %i\n", -56794, -56794);
	printf("I printed %d characters\n", count_hmd);
	return (0);
}
