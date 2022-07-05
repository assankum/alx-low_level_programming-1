#include <stdio.h>
/**
*main- Entry point
*
*Return: Always 0 (success)
*/

int main(void)
{
	char alph;
	char ALPH;

	for (alph = 'a' ; alph <= 'z' ; alph++)
	{
	if (alph == 'e' || alph == 'q')
	{
	continue;
	}
	puts(&alph);
	}
/*	for (ALPH = 'A' ; ALPH <= 'Z' ; ALPH++) */
/*	{	putchar(ALPH); */
/*	} */
	return (0);
}
