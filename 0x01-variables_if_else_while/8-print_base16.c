#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int i = 0;
char base16[] = "0123456789abcdef";
while (i < 16)
{
putchar(base16[i]);
i++;
}
putchar('\n');
return (0);
}
