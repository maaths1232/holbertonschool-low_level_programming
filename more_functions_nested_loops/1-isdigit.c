#include <stdio.h>
#include "main.h"

#include "main.h"

/**
 * _isdigit - Vérifie si le caractère passé est un chiffre (0 à 9)
 * @c: Le caractère à tester (sous forme d'entier ASCII)
 *
 * Return: 1 si c est un chiffre (0-9), 0 sinon
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
