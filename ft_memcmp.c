/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:39:37 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:10:27 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*temps1;
	const unsigned char	*temps2;

	i = 0;
	temps1 = s1;
	temps2 = s2;
	while (temps1[i] && i < n)
	{
		if (temps1[i] != temps2[i])
		{
			return (temps1[i] - temps2[i]);
		}
		i++;
	}
	if (i >= n)
		return (0);
	return (temps1[i] - temps2[i]);
}
/*
#include <stdio.h>

int main()
{
	const char s1[17] = "Testi de fonct";
	const char s2[17] = "Test de fonction";
	size_t nb;

	nb = 5;

	printf("Retour fonction officiel : %d\n", memcmp(s1, s2, nb));
	printf("Retour fonction maison : %d\n", memcmp(s1, s2, nb));
}
 */
