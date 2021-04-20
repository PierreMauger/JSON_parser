/*
** EPITECH PROJECT, 2020
** parser.h
** File description:
** 29/03/2021
*/

#ifndef PARSER_H
#define PARSER_H

#include "blib.h"

int *batoi_arr(char *src);
char *get_id(char *buffer, int id);
char **clean_tab(char **tab);
size_t parser_array(char *buffer, int i);
size_t parser(char *buffer, char *str, int id);

char *parser_write(char *buffer, char *name, char *new_name, int id);

#endif // PARSER_H
