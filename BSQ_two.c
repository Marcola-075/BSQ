/*
** EPITECH PROJECT, 2018
** BSQ
** File description:
** BSQ
*/

#include "my.h"

int check_char(char **tab, int y, int x)
{
    int size = 1;

    if (tab[y][x] != '.')
        return (0);
    while (check_square(tab, y, x, size) == 1)
        size = size + 1;
    return (size - 1);
}

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

int errors(char *str)
{
    char *dest = put_in_char(str);
    char **tab = put_in_tab(dest, 0, 0, 0);
    int a = my_getnbr(dest);

    if (check_open(str) == 84)
        return (84);
    if (check_str(tab) == 84)
        return (84);
    if (a <= 0 || a != (check_len(dest) - 2))
        return (84);
    if (check_strlen(tab) == 84)
        return (84);
    return (0);
}

int line_x(char **tab)
{
    int i = 0;
    int y = 1;

    while (tab[1][i] != '\0') {
        if (tab[1][i] == '.') {
            tab[1][i] = 'x';
            disp_tab(tab);
            return (0);
        }
        i = i + 1;
    }
    disp_tab(tab);
}
