#include "main.h"

/**
 * print_square - affiche un carré de taille donnée avec le caractère '#'
 * @size: la taille du carré
 *
 * Return: rien (void)
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
