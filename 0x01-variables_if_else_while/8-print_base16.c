#include <stdio.h>

/**
* main - Entry point
*description:- print all the digits
* Return:0
*/
int main(void)
{
char o;

for (o = '0'; o <= '9'; ++o)
putchar (o);
for (o = 'a'; o <= 'f'; ++o)
putchar (o);

putchar('\n');

return (0);
}
