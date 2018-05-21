/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "../include/my.h"

void print_rules(t_word *word)
{
	printf("*: invalide letter\n");
	printf("?: incorrectly placed letter\n");
	printf("Will you find the secret word?\n");
	printf("%s\n\n", word->finding);
}

int main(int ac, char **av)
{
	int i = 0;
	t_word word;

	if (ac != 2)
		return (84);
	init(&word, av);
	print_rules(&word);
	while (i == 0) {
		i = play(&word);
	}
	if (i == WIN)
		printf("You won!\n");
	else if (i == LOSE)
		printf("You lost!\n");
	return (i);
}