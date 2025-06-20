#include <stdio.h>

/**
 * main - point d'entrée du programme
 *
 * Description: Ce programme affiche toutes les lettres de l'alphabet
 * en minuscules, puis en majuscules, suivies d'un saut de ligne.
 *
 * Contraintes :
 * - Utilisation uniquement de la fonction putchar (pas de printf, puts, etc.).
 * - Tout le code doit être dans la fonction main.
 * - putchar ne peut être utilisé que trois fois.
 *
 * Return: 0 pour indiquer que le programme s'est terminé avec succès.
 */
int main(void)
{
    char c = 'a';

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
