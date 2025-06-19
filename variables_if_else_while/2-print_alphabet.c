#include <stdio.h>
 /**
  * main - point d'entrée du programme
  * *
  * * Description: Ce programme affiche toutes les lettres de l'alphabet
  * * en minuscules, de 'a' à 'z', suivi d'un saut de ligne.
  * * 
  * * Contraintes:
  * * - Utilisation uniquement de la fonction putchar pour l'affichage.
  * * - Le code doit être contenu dans la fonction main.
  * * - Putchar ne peut être utilisé que deux fois.
  * *
  * * Return: 0 pour indiquer que le programme s'est terminé avec succès.
  * */
int  main(void)
{
	char c = 'a';
	while (c<= 'z')
	{		
	
	putchar(c);
	c++;
	}
	puthcar('\n');
	
	return 0;
}
