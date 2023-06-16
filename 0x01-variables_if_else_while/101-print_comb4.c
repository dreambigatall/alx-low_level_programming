#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int n;
	int f= 0;

	while (f < 10)
	{
		n = 0;
		while (n < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != n && n != f && f < n && n < c)
				{
					putchar('0' + f);
					putchar('0' + n);
					putchar('0' + c);

					if (c + n + f != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				c++;
			}
			n++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
