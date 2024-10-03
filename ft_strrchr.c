/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:59:05 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:49:26 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>

int main()
{
	printf("La fonction officiel retoourne : %s\n",
	strrchr("es de la foncion", 't'));
	printf("La fonction maison retoourne : %s\n",
	ft_strrchr("es de la foncion", 't'));
}
 */
