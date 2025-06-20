#include <stdio.h>

/**
 * main - Point d'entrée du programme
 *
 * Description: Ce programme affiche les lettres de l'alphabet
 * en minuscules puis en majuscules, suivies d'un saut de ligne.
 *
 * Return: 0 si le programme réussit.
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
