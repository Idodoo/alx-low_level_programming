#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
int i = 0;
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
while (i < 26)
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);
}
