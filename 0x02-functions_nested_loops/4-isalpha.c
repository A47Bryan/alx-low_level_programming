#include "main.h"

/**
  * _isalpha - Checks for alphabetic character
  * @s: The character to be checked
  *
  * Return: 1 for alphabetic character or 0 for anything else
  */
int _isalpha(int s)
{
	if ((s >= 65 && s <= 90) || (s >= 97 && s <= 122))
	{
		return (1);
	}

	return (0);
}
