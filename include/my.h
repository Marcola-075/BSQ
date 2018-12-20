/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** CPD09task02
*/

#ifndef MY_H
#define MY_H

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <stddef.h>

typedef struct sqr
{
    int x;
    int y;
    int size;
} sqr;

char **put_in_tab(char *str, int i, int y, int z);
int check_open(char const *filepath);
int check_str(char **tab);
int    my_getnbr(char const *str);
int check_len(char *str);
int check_strlen(char **tab);
int    my_strlen(char const *str);
int    my_putstr(char const *str);
int check_o(char *str);
int check_pt(char *str);
void put_pt_x(int clos, int len, char **tab, char * str);
void disp_tab(char **tab);
void put_x(char **tab, sqr save);
int check_sqr(char **tab, int s_x, int s_y, int size);
int check_square(char **tab, int y, int x, int size);
int check_char(char **tab, int y, int x);
int check_tab(char **tab, char *str, int x, int out);
char *put_in_char(char const *filepath);
int errors(char *str);
int line_x(char **tab);

#endif
