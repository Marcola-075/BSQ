/*
** EPITECH PROJECT, 2018
** check_spe
** File description:
** check_spe
*/

#include "my.h"

int check_o(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i = i + 1;
    while (str[i] != '\0') {
        if (str[i] != 'o' && str[i] != '\n')
            return (1);
        i = i + 1;
    }
    return (0);
}

int check_pt(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i = i + 1;
    while (str[i] != '\0') {
        if (str[i] != '.' && str[i] != '\n')
            return (1);
        i = i + 1;
    }
    return (0);
}

void put_pt_clos(int clos, char **tab)
{
    int i = 1;
    int y = 0;

    while (tab[i] != NULL) {
        while (y != clos) {
            if (tab[i][y] == '.')
                tab[i][y] = 'x';
            y = y + 1;
        }
        y = 0;
        my_putstr(tab[i]);
        i = i + 1;
    }
}

void put_pt_len(int len, char **tab)
{
    int i = 1;
    int y = 0;

    while (i != len + 1) {
        while (tab[i][y] != '\0') {
            if (tab[i][y] == '.')
                tab[i][y] = 'x';
            y = y + 1;
        }
        y = 0;
        my_putstr(tab[i]);
        i = i + 1;
    }
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i = i + 1;
    }
}

void put_pt_x(int clos, int len, char **tab, char *str)
{
    int i = 1;
    int y = 0;

    if (clos == len || clos < len)
        put_pt_clos(clos, tab);
    if (len < clos)
        put_pt_len(len, tab);
}
