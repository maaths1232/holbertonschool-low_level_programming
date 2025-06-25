#include "main.h"

/**
 * print_diagonal - dessine une diagonale avec le caractère '\'
 * @n: nombre de lignes et de '\' à afficher
 *
 * Return: rien (void)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
