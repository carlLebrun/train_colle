/*
** EPITECH PROJECT, 2018
** my
** File description:
** my
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
#include <time.h>

int play(t_word *word);
void init(t_word *word, char **av);
char *my_getline(void);
int your_turn(t_word *word);
int nb_word_per_line(char *);
int file_opener(char *);
void re_initfind(t_word *word);
char *secret_word(char **av);
char **my_str_to_wordtab(char c, char *str);

#endif /* !MY_H */