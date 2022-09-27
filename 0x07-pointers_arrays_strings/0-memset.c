#include "main.h"


/**
 * _memset - fills memory with n bytes
 * @n: bytes of the memory
 * @s: pointer block of memory to fill
 * @b: value to set
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n);
{
	int i = 0;

	for (; n > 0; i++)
		{
			s[i] = b;
			n--;
		}
	return (s);
}
