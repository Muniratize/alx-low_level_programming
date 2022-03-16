#include "main.h"
/**
 * print_alphabet_x10 - A function that prints the alphabet 10 times
 *
 * Description - This function prints the alphabet 10 times 
 * and adds a new line after each
 */
void print_alphabet_x10(void)
{
	char j;
	int i;

	i = 0;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar ('\n');
		i++;
	}
}
