#include "main.h"
/**
 * Description: print_last_digit - function that print the last digit
 * of a number
 * @n: integer argument
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	_putchar('0' + (n % 10));
	return (n % 10);
}
