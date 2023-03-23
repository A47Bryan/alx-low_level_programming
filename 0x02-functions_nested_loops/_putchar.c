#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to output
 *@c: the character allocated
 *Return: 1
 *else return -1 and err no is set appropriately
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
