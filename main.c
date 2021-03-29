/*
** EPITECH PROJECT, 2020
** Base
** File description:
** main
*/

#include "blib.h"
#include "parser.h"

int main(int argc, char **argv)
{
    char *buffer;

    if (argc != 2)
        return 84;
    buffer = bread_file(argv[1], 20);
    if (!buffer)
        return 84;
    bprintf("%s", buffer);
    return 0;
}
