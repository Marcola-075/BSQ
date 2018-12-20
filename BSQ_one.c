/*
** EPITECH PROJECT, 2018
** load_file_in_mem
** File description:
** BSQ_bootstrap_Part_IV_I
*/

#include "my.h"

void disp_tab(char **tab)
{
    int y = 1;

    while (tab[y] != NULL) {
        my_putstr(tab[y]);
        y = y + 1;
    }
}

void put_x(char **tab, sqr save)
{
    int x = save.x;
    int y = save.y;
    int i = 1;

    while (y != save.y + save.size) {
        while (x != save.x + save.size) {
            tab[y][x] = 'x';
            x = x + 1;
        }
        x = save.x;
        y = y + 1;
    }
    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        i = i + 1;
    }
}

int check_sqr(char **tab, int s_x, int s_y, int size)
{
    int x = s_x;

    while (tab[s_y][s_x] != '\0' && s_x < x + size) {
        if (tab[s_y][s_x] != '.')
            return (1);
        s_x = s_x + 1;
    }
    return (0);
}

int check_square(char **tab, int y, int x, int size)
{
    int s_x = x;
    int s_y = y;

    while (tab[s_y] != NULL && s_y < y + size) {
        s_x = x;
        if (check_sqr(tab, s_x, s_y, size) == 1)
            return (0);
        s_y = s_y + 1;
    }
    return (1);
}

int check_tab(char **tab, char *str, int x, int out)
{
    int y = 1;
    sqr save;

    save.y = 0;
    save.x = 0;
    save.size = 0;
    while (y + save.size < check_len(str) - 1) {
        while (tab[y][x + save.size] != '\0') {
            out = check_char(tab, y, x);
            if (out > save.size) {
                save.y = y;
                save.x = x;
                save.size = out;
            }
            x = x + 1;
        }
        x = 0;
        y = y + 1;
    }
    put_x(tab ,save);
}
