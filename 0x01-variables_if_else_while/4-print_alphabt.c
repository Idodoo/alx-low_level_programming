#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int i = 0;
char alphabet[] = "abcdfghijklmnoprstuvwxyz";
while (i < 24)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
