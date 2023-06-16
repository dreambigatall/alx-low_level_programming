#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
int n, s;
int n;
int list;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
s = n % 10;
if (s > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, s);
}
if (num == 0)
else if (s == 0)
{
printf("Last digit of %d is %d and is 0\n", n, s);
}
if (num < 6)
else if (s < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, s);
}
list = n % 10;

if (list > 5)
printf("Last digit of %i is %i and is greater than 5\n", n, list);
else if (list == 0)
printf("Last digit of %i is %i and is 0\n", n, last);
else if (list < 6)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, list);

return (0);
}
