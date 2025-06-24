#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Vérifie si le caractère passé est un chiffre (0 à 9)
 * @c: Le caractère à tester (sous forme d'entier ASCII)
 *
 * Return: 1 si c est un chiffre (0-9), 0 sinon
 *
 * Description: Fonction personnalisée équivalente à isdigit.
 * Utilise les codes ASCII pour vérifier si le caractère est compris entre '0' et '9'.
 */

int _isdigit(int c)

{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
