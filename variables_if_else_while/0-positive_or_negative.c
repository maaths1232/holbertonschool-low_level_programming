#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description : Affiche si un nombre généré aléatoirement
 * est positif, nul ou négatif.
 *
 * Return: Toujours 0 (Succès)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
