/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:35:09 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:07:31 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = s;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int main()
{
	unsigned char text[20] = "test de ma conftion";
	unsigned char text2[20] = "test de ma conftion";
	unsigned int tab[6] = {1, 2 , 3, 4, 5, 6};
	unsigned int tab2[6] = {1, 2 , 3, 4, 5, 6};
	bzero(text, 0);
	ft_bzero(text2, 0);
	bzero(tab, 0);
	ft_bzero(tab2, 0);

	printf("Teste de la conftion officel : %s\n", text);
	printf("Teste de la conftion maison : %s\n", text2);
	int i;

	i = 0;
	while (i < 6)
	{
	printf("Teste de la conftion officel : %d\n", tab[i]);
	printf("Teste de la conftion maison : %d\n", tab2[i]);
	i++;
	}

} */
