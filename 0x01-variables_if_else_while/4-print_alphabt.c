#include <stdio.h>
/**
 * main - Entry point
 *
 * description - Print lowercase alpa except e and q
 * Return: 0
 */
int main(void)
{
	int lw = 97;

	while (lw <= 122)
	{
		if (lw == 101 || lw == 113)
		{
			lw++;
			continue;
		}
		putchar(lw);
		lw++;
	}
	putchar('\n');
	return (0);

}
