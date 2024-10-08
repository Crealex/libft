/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:08:24 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:08:03 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*tab;
	size_t	i;

	tab = malloc(size * count);
	i = 0;
	if (tab == NULL)
		return (0);
	while (i < count)
	{
		tab[i] = 0;
		i++;
	}
	return ((void *)tab);
}
/*
#include <stdio.h>

int main()
{
	size_t nmemb = 4;
	size_t size = 5;
	printf("la fonction officiel retourne : %p\n",(int *)calloc(nmemb, size));
	printf("la fonction maison retourne : %p\n",(int *)ft_calloc(nmemb, size));
}
 */
