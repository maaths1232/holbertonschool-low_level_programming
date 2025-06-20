#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche tous les chiffres de 0 à 9 sans utiliser de variable de type char.
 *
 * Contraintes :
 * - putchar utilisé seulement deux fois.
 * - Pas de variables de type char.
 *
 * Return: 0 si le programme se termine correctement.
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + 48); /* 48 = '0' en ASCII */

	putchar('\n');
	return (0);
}
