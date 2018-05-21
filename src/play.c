/*
** EPITECH PROJECT, 2018
** play
** File description:
** play
*/

#include "../include/my.h"

void try_word(t_word *word, char *line)
{
	int i = 1;
	int j = 1;

	while (line[i] != '\n') {
		while (word->sec_word[j] != '\0') {
			if (word->sec_word[j] == line[i])
				word->finding[i] = '?';
				j++;
		}
		j = 0;
		i++;
	}
	i = 1;
	while (line[i] != '\n') {
		if (line[i] == word->sec_word[i])
			word->finding[i] = line[i];
		i++;
	}
}

void not_thesize(t_word *word, char *line)
{
	if (strlen(word->sec_word) < strlen(line) - 1) {
		printf("Word too long. Retry.\n");
		your_turn(word);
	}
	if (strlen(word->sec_word) > strlen(line) - 1) {
		printf("Word too short. Retry.\n");
		your_turn(word);
	}
}

int your_turn(t_word *word)
{
	char *line;

	printf("Round %d\n", word->round);
	printf(">");
	line = my_getline();
	if (!line || line[0] == '\0')
		return (84);
	not_thesize(word, line);
	try_word(word, line);
	if (strncmp(word->sec_word, line, strlen(word->sec_word)) == 0)
		return (WIN);
	return (0);
}

int play(t_word *word)
{
	//if (your_turn(word) == 84)
	//	return (84);
	if (your_turn(word) == WIN)
		return WIN;
	printf("%s\n\n", word->finding);
	word->round++;
	if (word->round > word->size)
		return (LOSE);
	re_initfind(word);
	return (0);
}