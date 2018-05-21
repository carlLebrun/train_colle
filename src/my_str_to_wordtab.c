/*
** EPITECH PROJECT, 2018
** my_str_to_wordtab
** File description:
** strtwt
*/

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>

int my_strlen(char const *str)
{
	int i = 0;

	for ( i = 0; str[i] != 0; i++);
	return (i);
}

int nbrword(char *s, char c)
{
	int n = 0;

	for (int i = 0; s[i] != '\0'; i++) {
		if (i == 0 && s[i] != c)
			n++;
		else if (i > 0 && s[i - 1] == c && s[i] != c && s[i] != '\n')
			n++;
	}
	return (n);
}

int decalage(int j, char *str, char c)
{
	while (str[j] != '\0' && str[j] == c)
		j++;
	return (j);
}

char **my_str_to_wordtab(char c, char *str)
{
	int nbrwords = nbrword(str, c);
	char **dest = malloc(sizeof(char*) * (nbrwords + 1));
	int j = 0;
	int i = 0;
	int n;

	while (nbrwords-- > 0) {
		n = 0;
		dest[i] = malloc(sizeof(char) * strlen(str));
		j = decalage(j, str, c);
		while (str[j] != '\0' && str[j] != c) {
			dest[i][n] = str[j];
			j++;
			n++;
		}
		dest[i][n] = '\0';
		i++;
	}
	dest[i] = NULL;
	return (dest);
}