/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:34:06 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 18:44:44 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>

int malloc_words(char **res,const char *s, char c)
{
	int word;
	int countl;
	int i;

	word = 0;
	i = 0;
	while(s[i])
	{
		countl = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			countl++;
			i++;
		}
		res[word] = malloc(sizeof(char) * countl + 1);
		if (res[word] == NULL)
			return (0);
		word++;

	}
	return (1);
}

int counterc(char const *s, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

 char	**ft_split(char const *s, char c)
 {
	 char **res;
	 int i;
	 int jres;
	 int ires;

	res = malloc(sizeof(char*) * counterc(s, c));
	i = 0;
	jres = 0;
	ires = 0;
	if (res == NULL || !malloc_words(res, s, c))
		return (0);
	while (s[i] == c)
		i++;
	while(s[i])
	{
		if (s[i] == c)
		{
			ires++;
			jres = 0;
			i++;
		}
		res[ires][jres] = s[i];
		jres++;
		i++;
	}
	return (res);
 }


#include <stdio.h>

int main()
{
	char *text = ",,je,teste,ma,fonction";
	char sep = ',';
	char **res = ft_split(text, sep);

	printf("Premiere phrase : %s\n", res[0]);
	printf("Deuxieme phrase : %s\n", res[1]);
	printf("Troisieme phrase : %s\n", res[2]);
	printf("Quatrieme phrase : %s\n", res[3]);

}
