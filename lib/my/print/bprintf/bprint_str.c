/*
** EPITECH PROJECT, 2020
** bprint_str.c
** File description:
** 24/03/2021
*/

#include "bprint.h"

void bprint_str(const size_t str)
{
    char *string = (char *)str;
    size_t len = bstrlen(string);

    write(1, string, len);
}
