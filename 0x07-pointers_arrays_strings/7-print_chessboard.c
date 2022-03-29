#include "main.h"

/**
 * print_chessboard - prints an 8x8 chessboard
 * @a: 2d char array representing board
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
@@ -13,7 +14,7 @@ void print_chessboard(char (*a)[8])
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[j][j]);
			_putchar((*(a + i))[j]);
		}
		_putchar('\n');
	}
