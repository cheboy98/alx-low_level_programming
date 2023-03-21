#include <stdio.h>
/**
 * main - Entry point
 * description - Print lowercase and upercase alphabets
 * Return: alwoys 0
 */
int main(void)
{
	int up = 97;
	int lw = 65;

	while (up <= 122)
	{
		putchar(up);
		up++;
	}
	while (lw <= 90)
	{
		putchar(lw);
		lw++;
	}
	putchar('\n');
	return (0);
}
