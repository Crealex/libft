/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:34:06 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 22:52:04 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Compte le nombre de mots dans la chaîne `s` séparés par le délimiteur `c`
static int	counterc(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (count);
}

// Alloue la mémoire pour chaque mot trouvé dans la chaîne `s`
static int	malloc_words(char **res, const char *s, char c)
{
	int	word;
	int	countl;
	int	i;

	word = 0;
	i = 0;
	while (s[i])
	{
		countl = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			countl++;
			i++;
		}
		if (countl > 0)
		{
			res[word] = malloc(countl + 1);
			if (res[word] == NULL)
				return (0);
			word++;
		}
	}
	res[word] = NULL;
	return (1);
}

// Remplit le tableau `res` avec les mots extraits de `s`
static void	fill(char **res, const char *s, char c)
{
	int	i;
	int	jres;
	int	ires;

	i = 0;
	jres = 0;
	ires = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			res[ires][jres] = '\0';
			ires++;
			jres = 0;
			while (s[i] == c)
				i++;
			continue ;
		}
		res[ires][jres++] = s[i++];
	}
	res[ires][jres] = '\0';
}

// Fonction principale qui sépare la chaîne `s` en mots séparés par `c`
char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word_count = counterc(s, c);
	res = malloc(sizeof(char *) * (word_count + 1));
	if (res == NULL)
		return (NULL);
	if (!malloc_words(res, s, c))
	{
		while (res[i])
		{
			free(res[i]);
			i++;
		}
		free(res);
		return (NULL);
	}
	if (word_count > 0)
		fill(res, s, c);
	return (res);
}

/*
#include <stdio.h>

int main()
{
	char *text = ",,jeteste,,afo,ncti,on,";
	char sep = ',';
	char **res = ft_split(text, sep);

	printf("Premiere phrase : %s\n", res[0]);
	printf("Deuxieme phrase : %s\n", res[1]);
	printf("Troisieme phrase : %s\n", res[2]);
	printf("Quatrieme phrase : %s\n", res[3]);
	printf("Derniere phrase : %s\n", res[4]);

}
 */
