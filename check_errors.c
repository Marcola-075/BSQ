/*
** EPITECH PROJECT, 2018
** check_open
** File description:
** check_open
*/

#include "my.h"

int check_open(char const *filepath)
{
    int a = open(filepath, O_RDONLY);

    if (a < 0)
        return (84);
    else
        return (0);
}

int checks(char **tab, int i, int y)
{
    while (tab[i][y] != '\0') {
        if (tab[i][y] != '.' && tab[i][y] != 'o' && tab[i][y] != '\n')
            return (84);
        y = y + 1;
    }
    return (0);
}

int check_str(char **tab)
{
    int y = 0;
    int i = 1;

    while (tab[0][y] != '\0') {
        if (tab[0][y] != '\n' && tab[0][y] < '0' || tab[0][y] > '9')
            return (84);
        y = y + 1;
    }
    y = 0;
    while (tab[i] != NULL) {
        if (checks(tab, i, y) == 84)
            return (84);
        y = 0;
        i = i + 1;
    }
    return (0);
}

int check_strlen(char **tab)
{
    int i = 2;
    int a = my_strlen(tab[1]);

    while (tab[i + 1] != NULL) {
        if (my_strlen(tab[i]) != a)
            return (84);
        i = i + 1;
    }
    return (0);
}
