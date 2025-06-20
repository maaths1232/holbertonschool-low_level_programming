#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche l'alphabet en minuscules sauf 'q' et 'e',
 * suivi d'une nouvelle ligne.
 *
 * Return: 0 si le programme s'exécute avec succès
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
