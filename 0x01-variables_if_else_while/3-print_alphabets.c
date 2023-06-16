nclude <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char L = 'a';

	while (L <= 'z')
	{
		putchar(L);
		L++;
	}

	L = 'A';

	while (L <= 'Z')
	{
		putchar(L);
		L++;
	}

	putchar('\n');
	return (0);
}
