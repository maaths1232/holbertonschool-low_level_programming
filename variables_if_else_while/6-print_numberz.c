#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Affiche tous les chiffres de 0 à 9 sans utiliser
 * de variable de type char. Utilise uniquement putchar deux fois.
 *
 * Return: 0 si le programme se termine correctement.
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');

	return (0);
}
