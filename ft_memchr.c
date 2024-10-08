/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:34:35 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 15:35:41 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*temp;
	unsigned char		cu;

	i = 0;
	temp = (const unsigned char *)s;
	cu = (unsigned char)c;
	while (i < n)
	{
		if (temp[i] == cu)
		{
			return ((void *)&temp[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	size_t nb;
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	nb = 7;
	printf("La fonction officiel retoourne : %s\n",
	 memchr(tab, -1, nb));
	printf("La fonction maison retoourne : %s\n",
	ft_memchr(tab, -1, nb));
}
 */
