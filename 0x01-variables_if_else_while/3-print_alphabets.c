nclude <stdio.h>
/**
 * main - main block
 * Description:  prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		putchar(l);
		l++;
	}

	l = 'A';

	while (l <= 'Z')
	{
		putchar(l);
		L++;
	}

	putchar('\n');
	return (0);
}
