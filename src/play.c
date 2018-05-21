/*
** EPITECH PROJECT, 2018
** play
** File description:
** play
*/

#include "../include/my.h"

void your_turn(t_word *word)
{
	char *line;

	printf("Round %d\n", word->round);
	printf("%s");
}

int play(t_word *word)
{

	if (word->round == word->size)
		return (LOSE);
	return (0);
}