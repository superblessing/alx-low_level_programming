#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'Z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
