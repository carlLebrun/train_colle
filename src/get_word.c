/*
** EPITECH PROJECT, 2018
** read_word
** File description:
** read_word
*/

#include "../include/my.h"

char *my_getline()
{
	char *line;
	size_t len = 0;
	ssize_t read = 0;

	read = getline(&line, &len, stdin);
	printf(">%s",line);
	return (line);
}