#include <stdio.h>

/**
 * main - Point d'entrée
 *
 * Description : Affiche tous les chiffres en base 16 (hexadécimal)
 * en minuscules, suivis d'un saut de ligne. Les caractères vont de
 * '0' à '9' puis de 'a' à 'f'.
 *
 * Return: 0 (succès)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
