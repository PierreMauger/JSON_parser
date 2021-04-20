/*
** EPITECH PROJECT, 2020
** Base
** File description:
** main
*/

#include "parser.h"

int main(int argc, char **argv)
{
    char *buffer = bread_file("mons.json", 40);

    bprintf("%d\n", (int)parser(buffer, "width", 1));
    return 0;
}
