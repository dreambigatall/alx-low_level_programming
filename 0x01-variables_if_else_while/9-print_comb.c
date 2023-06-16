#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int g = 0;

	while (g < 10)
	{
		putchar(48 + g);
		if (g != 9)
		{
			putchar(',');
			putchar(' ');
		}
		g++;
	}
	putchar('\n');
