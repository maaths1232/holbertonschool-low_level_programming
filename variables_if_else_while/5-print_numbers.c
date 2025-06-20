#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche tous les chiffres en base 10 à partir de 0,
 * suivis d'une nouvelle ligne.
 *
 * Return: 0 si le programme s'exécute avec succès
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
