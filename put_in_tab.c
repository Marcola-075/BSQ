/*
** EPITECH PROJECT, 2018
** put_in_tab
** File description:
** put_in_tab
*/

#include <stdlib.h>
#include "my.h"

int check_len(char *str)
{
    int i = 0;
    int a = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            a = a + 1;
        i = i + 1;
    }
    return (a);
}

char **put_in_tab(char *str)
{
    int i = 0;
    int y = 0;
    int z = 0;
    int size = check_len(str);
    char **tab = malloc(sizeof(char *) * size + 1);

    tab[y] = malloc(sizeof(char) * size);
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            tab[y][z] = '\0';
            y = y + 1;
            tab[y] = malloc(sizeof(char) * size);
            z = 0;
        }
        tab[y][z] = str[i];
        i = i + 1;
        z = z + 1;
    }
    tab[y + 1] = NULL;
    return (tab);
}
