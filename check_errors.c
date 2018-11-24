/*
** EPITECH PROJECT, 2018
** check_open
** File description:
** check_open
*/

#include <fcntl.h>
#include <stdlib.h>
#include "my.h"

int check_open(char const *filepath)
{
    int a = open(filepath, O_RDONLY);

    if (a < 0)
        return (84);
    else
        return (0);
}

int check_str(char *str)
{
    int i = 0;

    while (str[i] != '\n') {
        if (str[i] < '0' || str[i] > '9' ||str[i] == '\0')
            return (84);
        i = i + 1;
    }
    while (str[i] != '\0') {
        if (str[i] != '.' && str[i] != 'o' && str[i] != '\n')
            return (84);
        i = i + 1;
    }
    return (0);
}

int check_strlen(char **tab)
{
    int i = 2;
    int a = my_strlen(tab[1]);

    while (tab[i] != NULL) {
        if (my_strlen(tab[i]) != a)
            return (84);
        i = i + 1;
    }
}
