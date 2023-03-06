#include "main.h"

/**
 * print_chessboard - pribts the chessboard
 * @a: Address of the first row of the array
 */

void print_chessboard(char(*a)[8])
{
	char *p;
	int i, j;

	for (i = 0; i < 8; i++)
	{
		p = (char *)(a + i);
		for (j = 0; j < 8; j++)
		{
			_putchar(*(p + j));
		}
		_putchar('\n');
	}
}
