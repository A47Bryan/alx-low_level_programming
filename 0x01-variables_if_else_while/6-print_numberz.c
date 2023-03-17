#include <stdio.h>
/**
 *main - print numbers
 *for - loop in use
 *putchar - to convert to ASCII value
 *Return: zero
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	putchar((n % 10) + '0');
	putchar('\n');
	return (0);
}
