/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 17:21:20 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 18:14:13 by atomasi          ###   ########.fr       */
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
		malus = 1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		i++;
	}
	if (i > 0)
	{
		return (1);
	}
	else if (malus && i > 1)
		return (-1);
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
	return (1);
}

int ft_atoi(const char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (negmax(str))
		return (-2147483648);
	if (check(str) == 1)
	{
		while(str[i] >= 48 && str[i] <= 57 && str[i])
		{
			result += str[i] - '0';
			result *= 10;
			i++;
		}
		result /= 10;
		if (check(str) == -1)
			result *= -1;
		return (result);
	}
	return (0);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
	char text[12] = "-2147483";

	printf("Test de la fonction officielle : %d\n", atoi(text));
	printf("Test de la fonction maison : %d\n", ft_atoi(text));
}
