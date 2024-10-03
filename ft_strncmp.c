/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:06:38 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:40:29 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (i >= n)
		return (s1[i - 1] - s2[i - 1]);
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int main()
{
	const char s1[17] = "Test de fonct";
	const char s2[17] = "Test de fonction";
	size_t nb;

	nb = 13;

	printf("Retour fonction officiel : %d\n", strncmp(s1, s2, nb));
	printf("Retour fonction maison : %d\n", ft_strncmp(s1, s2, nb));
} */
