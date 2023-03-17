#include <stdio.h>
/**
 *main - printing alphabets in small and caps
 *for - loop to aid in program
 *Return: zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
