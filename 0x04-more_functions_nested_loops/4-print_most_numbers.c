#include "main.h"

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void)
{
	int ch;

	for (ch 0 48; ch < 58; ch++)
	{
		if (ch != 50 && ch != 52)
			_putchar(ch);
	}
	_putchar('\n');
}
