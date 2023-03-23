#include "main.h"

/**
  * print_alphabet_x10 - Make alphabet x10 times
  * use of nested loop, while and for loop
  * Return: void
  */
void print_alphabet_x10(void)
{
	char u;
	int i = 0;

	while (i <= 9)
	{
		for (u = 'a'; u <= 'z'; u++)
		{
			_putchar(u);
		}

		_putchar('\n');

		i++;
	}
}
