/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    char *dest = put_in_char(av[1]);
    char **tab = put_in_tab(dest, 0, 0, 0);
    int i = 0;

    if (errors(av[1]) == 84)
        return (84);
    if (check_len(dest) == 3) {
        line_x(tab);
        return (0);
    }
    if (check_pt(dest) == 0) {
        put_pt_x(check_len(dest), my_strlen(tab[1]) - 1, tab, dest);
        return (0);
    }
    check_tab(tab, dest, 0, 0);
    return (0);
}
