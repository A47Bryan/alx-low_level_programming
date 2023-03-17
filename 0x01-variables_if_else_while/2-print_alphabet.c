#include <stdio.h>
/**
 *main - program to print out small alphabets
 *for - loop to use
 *Return: should be zero
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);
}
