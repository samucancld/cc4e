#include <stdio.h>

int main() /* copy input to output; 1st version */
{
	int c;

	printf("%i\n", EOF);

	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}
}
