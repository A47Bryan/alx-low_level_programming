#include <stdio.h>
/**
 *main - print all letters except e & q
 *for - loop to print letters
 *if - negating print of e and q
 *Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
