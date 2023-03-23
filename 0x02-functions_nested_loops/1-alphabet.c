#include "main.h"

/**
  * print_alphabet - Make the alphabet
  * for loop to print the alphabet
  * Return: void type
  */
void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}

	_putchar('\n');
}
