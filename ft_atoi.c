/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:21:20 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 18:39:22 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int check(const char *str)
{
	int i;
	int malus;

	i = 0;
	malus = 0;
	if (str[i] == '-')
	{
		i++;
		malus = 1;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
	if (i > 0 || (malus && i > 1))
	{
		return (1);
	}
	return (0);
}

int negmax(const char *str)
{
	int i;
	const char *minint;

	i = 0;
	minint = "-2147483648";
	while (str[i])
	{
		if (str[i] != minint[i])
			return (0);
		i++;
	}
	if (i == 12)
		return (1);
	return (0);
}

int ft_atoi(const char *str)
{
	int i;
	int result;
	int malus;

	i = 0;
	result = 0;
	malus = 0;
	if (negmax(str))
		return (-2147483648);
	if (check(str) == 1)
	{
		if (str[i] == '-')
			{
				malus = 1;
				i++;
			}
		while(str[i] >= 48 && str[i] <= 57 && str[i])
		{
			result = result * 10 + str[i] - '0';
			i++;
		}
		if (malus)
			result *= -1;
		return (result);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char *text = "-674674A574";

	printf("Test de la fonction officielle : %d\n", atoi(text));
	printf("Test de la fonction maison : %d\n", ft_atoi(text));
}
