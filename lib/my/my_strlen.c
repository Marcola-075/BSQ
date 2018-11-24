/*
** EPITECH PROJECT, 2018
** my_strlen
** File description:
** count&returnsNB
*/

#include <stddef.h>

int    my_put_nbr(int nb);

int    my_strlen(char const *str)
{
    int    c = 0;

    if (my_strlen != NULL) {
        while (str[c] !='\0')
            c++;
        return (c);
    }
    else
        return (0);
}
