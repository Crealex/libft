/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:59:14 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:19:25 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	int		lj;

	i = 0;
	j = 0;
	lj = 0;
	while (needle[lj])
		lj++;
	if (!needle[i])
		return ((char *)&haystack[i]);
	while (haystack[i] && i < len)
	{
		if (needle[j] == haystack[i])
		{
			if (j == (lj - 1))
				return ((char *)&haystack[i - j]);
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	size_t nb;

	nb = 20;
	printf("La fonction officiel retourne : %s\n",
	strnstr("Test de la fonction", "fon", nb));
	printf("La fonction maison retourne : %s\n",
	ft_strnstr("Test de la fonction", "fon", nb));
}
 */
