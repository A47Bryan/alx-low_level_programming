#include <stdio.h>
/**
 *main - printing small letters in reverse
 *for - loop to aid
 *Return: always zero
 */
int main(void)
{
	char leta;

	for (leta = 'z'; leta >= 'a'; leta--)
		putchar(leta);
	putchar('\n');
	return (0);
}
