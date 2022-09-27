#include "main.h"
#include <stdio.h>

/**
 * print_diagrams - Entry point
 * @a: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
int i, res1 = 0, res2 = 0;
for (i = 0; i < size; i++)
{
	res1 += a[i];
	res2 += a[size - i - 1];
	a += size;
}
printf("%d, %d\n", res1, res2);
}







