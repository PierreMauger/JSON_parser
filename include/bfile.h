/*
** EPITECH PROJECT, 2020
** blib.c
** File description:
** 24/03/2021
*/

#ifndef BFILE_H
#define BFILE_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include "bstring.h"
#include "bmemory.h"

char *bread_file(const char *path, size_t size_read);

#endif // BFILE_H
