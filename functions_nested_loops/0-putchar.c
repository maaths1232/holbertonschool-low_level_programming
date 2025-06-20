#include "main.h"

/**
 * main - point d'entrée du programme
 *
 * Description: affiche "_putchar" suivi d'un saut de ligne
 *
 * Return: 0 pour indiquer que le programme s'est terminé avec succès
 */
int main(void)
{
    char *str = "_putchar";
    int i = 0;

    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }
    _putchar('\n');
    return (0);
}
