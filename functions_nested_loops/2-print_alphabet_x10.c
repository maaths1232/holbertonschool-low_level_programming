#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times followed by a new line
 * You can only use _putchar twice in your code
 */
void print_alphabet_x10(void)
{
    int i = 0;
    char letter;

    while (i < 10)
    {
        letter = 'a';
        while (letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
        _putchar('\n');
        i++;
    }
}
