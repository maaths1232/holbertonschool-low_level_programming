#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche l'alphabet en minuscules à l'envers,
 * suivi d'un saut de ligne.
 *
 * Contraintes :
 * - Utilisation uniquement de putchar (2 fois maximum).
 * - Tout doit être dans la fonction main.
 *
 * Return: 0 si le programme s'exécute avec succès.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
