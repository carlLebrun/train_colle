/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include "../include/my.h"

void print_rules(void)
{
	printf("*: invalide letter\n");
	printf("?: incorrectly placed letter\n");
	printf("Will you find the secret word?\n");
}

void main(void)
{
	int i = 0;
	t_word word;

	print_rules();
	while (i == 0) {
		play(&word);
	}
}