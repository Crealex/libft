/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:27:30 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 13:57:30 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return ((char*)&s[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("La fonction officiel retoourne : %s\n", strchr("Test de la fonction", 't'));
	printf("La fonction maison retoourne : %s\n", ft_strchr("Test de la fonction", 't'));
} */
