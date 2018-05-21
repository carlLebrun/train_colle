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

	srand(time(NULL));
	list = my_str_to_wordtab('\n', str);
	while (list[i] != NULL)
		i++;
	i = rand() % (i - 1) + 0;
	return (list[i]);
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

char *secret_word(char **av)
{
	int fd;
	char *buff = malloc(sizeof(char) * 1000);
	char *str;

	if ((fd = open(av[1], O_RDONLY)) == -1)
		return (NULL);
	read(fd, buff, 100);
	str = word_selector(buff);
	return (str);
}