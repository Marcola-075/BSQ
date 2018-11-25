/*
** EPITECH PROJECT, 2018
** load_file_in_mem
** File description:
** BSQ_bootstrap_Part_IV_I
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "my.h"

char *put_in_char(char const *filepath)
{
    struct stat sb;

    int filestat = stat(filepath, &sb);
    int size_file = sb.st_size;
    int end;
    int a = open(filepath, O_RDONLY);
    char *file = malloc(sizeof(char) * (size_file + 1));

    end = read(a, file, size_file);
    file[end] = '\0';
    close(a);
    return (file);
}

char **load_file_in_mem(char const *filepath)
{
    char *dest = put_in_char(filepath);
    char **tab = put_in_tab(dest);

    return (tab);
}

int errors(char *str)
{
    char *dest = put_in_char(str);
    char **tab = put_in_tab(dest);
    int a = my_getnbr(dest);

    if (check_open(str) == 84)
        return (84);
    if (check_str(dest) == 84)
        return (84);
    if (a <= 0 || a != check_len(dest))
        return (84);
    if (check_strlen(tab) == 84)
        return (84);
    return (0);
}

int BSQ(char *str)
{
    int i = 1;
    char *dest = put_in_char(str);
    char **tab = load_file_in_mem(str);

    if (check_o(dest) == 0) {
        while (tab[i] != NULL) {
            my_putstr(tab[i]);
            i = i + 1;
        }
        return (0);
    }
    if (check_pt(dest) == 0)
        put_pt_x(check_len(dest), my_strlen(tab[1]) - 1, tab, dest);
}

int main(int ac, char **av)
{
    if (errors(av[1]) == 84)
        return (84);
    else
        BSQ(av[1]);
    return (0);
}
