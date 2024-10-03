/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:29:19 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 15:32:39 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	countsetfront(char const *s1, const char *set)
{
	int	i;
	int	iset;
	int	count;

	i = 0;
	iset = 0;
	count = 0;
	while (set[iset])
	{
		if (s1[i] == set[iset])
		{
			i++;
			count++;
			iset = 0;
		}
		else
			iset++;
	}
	return (count);
}

int	countsetback(char const *s1, const char *set)
{
	int	i;
	int	iset;
	int	count;

	i = 0;
	iset = 0;
	count = 0;
	while (s1[i])
	{
		i++;
	}
	i--;
	while (set[iset])
	{
		if (s1[i] == set[iset])
		{
			i--;
			count++;
			iset = 0;
		}
		else
			iset++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*res;
	int		back;
	int		ires;
	int		count;

	i = 0;
	back = countsetback(s1, set);
	ires = 0;
	count = 0;
	while (s1[count])
		count++;
	res = malloc(sizeof(char) * (count - (countsetfront(s1, set) + back)));
	if (res == NULL)
		return (0);
	i = countsetfront(s1, set);
	while (s1[i] && i < (count - back))
	{
		res[ires] = s1[i];
		i++;
		ires++;
	}
	return (res);
}

/* #include <stdio.h>

int main()
{
	const char text[22] = "  ., y.test de..,..  ";
	const char set[4] = ", .";
	printf("Test de la fonction set countfront %d et countback %d\n",
	 countsetfront(text, set), countsetback(text, set));
	printf("resultat : %s\n", ft_strtrim(text, set));
}
 */
