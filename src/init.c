/*
** EPITECH PROJECT, 2018
** init
** File description:
** init
*/

#include "../include/my.h"

void re_initfind(t_word *word)
{
	int i = 1;

	word->finding[0] = word->sec_word[0];
	while (i != strlen(word->sec_word)) {
		word->finding[i] = '*';
		i++;
	}
}
void init(t_word *word, char **av)
{
	int i = 1;
	word->round = 1;
	word->sec_word = secret_word(av);
	printf("SEC :%s\n", word->sec_word);
	word->finding = malloc(sizeof(strlen(word->sec_word)) * (char) + 1);
	word->finding[0] = word->sec_word[0];
	while (i != strlen(word->sec_word)) {
		word->finding[i] = '*';
		i++;
	}
	word->finding[i] = '\0';
	word->size = strlen(word->sec_word);
}