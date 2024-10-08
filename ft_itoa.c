/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 10:50:33 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:21:13 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	int	nb;
	int	res;

	nb = n;
	res = 0;
	if (nb < 0)
	{
		res++;
		nb = nb * -1;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	int		i	;
	int		malus;
	char	*res;

	res = malloc(sizeof(char) * len(n));
	i = len(n);
	malus = 0;
	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		malus = 1;
	}
	res[i] = '\0';
	while (--i >= 0)
	{
		res[i] = (n % 10) + 48;
		n = n / 10;
	}
	if (malus)
		res[0] = '-';
	return (res);
}
/*
#include <stdio.h>

int main()
{
	printf("Test de la fonction len : %s", ft_itoa(0));
}
 */
