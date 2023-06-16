#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int o;
srand(time(0));
o = rand() - RAND_MAX / 2;
/* your code goes there */
if (o > 0)
{
printf("%d is positive\n", o);
}
if (o < 0)
{
printf("%d is negative\n", o);
}
if (o == 0)
{
printf("%d is zero\n", o);
}
return (0);
}
