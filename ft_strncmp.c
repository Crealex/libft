/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:06:38 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 14:47:37 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	s1u;
	unsigned char	s2u;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && i < n)
	{
		s1u = (unsigned char)s1[i];
		s2u = (unsigned char)s2[i];
		if (s1u != s2u)
		{
			return (s1u - s2u);
		}
		i++;
	}
	if (i == n)
		return (0);
	s1u = (unsigned char)s1[i];
	s2u = (unsigned char)s2[i];
	return (s1u - s2u);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	const char s1[8] = "test\200";
	const char s2[8] = "test\0";
	size_t nb;

	nb = 6;

	printf("Retour fonction officiel : %d\n", strncmp(s1, s2, nb));
	printf("Retour fonction maison : %d\n", ft_strncmp(s1, s2, nb));
} */
