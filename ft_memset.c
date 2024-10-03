/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:07:10 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:50:59 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (temp);
}
/*
#include <stdio.h>

int main()
{
	unsigned char text[20] = "Je teste ma fonction";
	size_t nb = 4;
	unsigned int tab[6] = {1, 2, 3, 4, 5, 6};
	ft_memset(text, '#', nb);
	printf("resultat : %s\n", ft_memset(text, '#', nb));
	printf("test : %s\n", memset(text, '#', nb));
	printf("resultat : %s\n", ft_memset(tab, '0', nb));
	printf("test : %s\n", memset(tab, '0', nb));
} */
