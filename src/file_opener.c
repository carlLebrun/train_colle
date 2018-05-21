/*
** EPITECH PROJECT, 2018
** file_opener.c
** File description:
** 
*/

#include "../include/my.h"

int nb_word_per_line(char *str)
{
	int i = 0;

	while (i <= strlen(str)) {
		if (str[i] == ' ')
			return (84);
		else
			i++;
	}
	return (0);
}

char *word_selector(char *str)
{
	int i = 0;
	char **list;

	list = my_str_to_wordtab('\n', str);
	printf("%s", list[0]);
	return (list[0]);
}

int file_opener(char *file_name)
{
	int fd;
	char *buff = malloc(sizeof(char) * 100);

	if ((fd = open(file_name, O_RDONLY)) == -1)
		return (84);
	read(fd, buff, 100);
	if (nb_word_per_line(buff) == 0)
		printf("%s", buff);
	else
		printf("ERREUR");
	free (buff);
	return (0);
}

int main(int ac, char **av)
{
	int fd;
	char *buff = malloc(sizeof(char) * 1000);

	if ((fd = open("../db.txt", O_RDONLY)) == -1)
		return (84);
	read(fd, buff, 100);
	word_selector(buff);
	return (0);
}
