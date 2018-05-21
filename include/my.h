/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** lingo
*/

#ifndef MY_H
#define MY_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "struct.h"

int file_opener(char *);
int nb_word_per_line(char *);

#endif /* !MY_H */