/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:42:16 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 13:05:05 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	is;
	char	*result;

	i = 0;
	is = start;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (0);
	while (s[is] && i < len)
	{
		result[i] = s[is];
		i++;
		is++;
	}
	result[i] = '\0';
	return (result);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	size_t start;
	size_t len;
	char const s[21] = "Je teste ma fonction";

	start = 4;
	len = 20;
	//printf("Le retour de la fonction officel est : %s", substr(s, start, len));
	printf("Le retour de la fonction officel est : %s", ft_substr(s, start, len));

} */
