/*
** EPITECH PROJECT, 2018
** put_in_tab
** File description:
** put_in_tab
*/

#include "my.h"

int check_len(char *str)
{
    int i = 0;
    int a = 1;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            a = a + 1;
        i = i + 1;
    }
    return (a);
}

int len_line(char *str, int i, char sep)
{
    int res = 2;

    while (str[i] != '\0' && str[i] != sep) {
        i = i + 1;
        res = res + 1;
    }
    return (res);
}

char **end_tab(char **tab, int y, int z)
{
    tab[y][z] = '\0';
    tab[y + 1] = NULL;
    return (tab);
}

char **put_in_tab(char *str, int i, int y, int z)
{
    char **tab = malloc(sizeof(char *) * (check_len(str) + 1));

    tab[y] = malloc(sizeof(char) * (len_line(str, i, '\n')));
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            tab[y][z] = '\n';
            tab[y][z + 1] = '\0';
            i += 1;
            y = y + 1;
            tab[y] = malloc(sizeof(char) * (len_line(str, i, '\n')));
            z = 0;
        }
        if (str[i] != '\0') {
            tab[y][z] = str[i];
            i = i + 1;
            z = z + 1;
        }
    }
    tab = end_tab(tab, y, z);
    return (tab);
}
