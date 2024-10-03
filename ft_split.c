/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:34:06 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 16:31:41 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdlib.h>


int	counter(char const *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
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
	return (count + i);
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
	if (res == NULL)
		return (0);
	while(s[i])
	{
		if (s[i] == c)
			ires++;
		res[ires][jres] = s[i];
		jres++;
		i++;
	}
	return (res);
 }

#include <stdio.h>

int main()
{
	char *text = "je teste, ma,fonction";
	char sep = ',';
	char **res = ft_split(text, sep);

	printf("Premiere phrase : %s", res[0]);
	printf("Deuxieme phrase : %s", res[1]);
	printf("Troisieme phrase : %s", res[2]);

}
