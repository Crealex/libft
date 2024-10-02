/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:13:11 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 13:17:33 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("Test de a avec la fonction officiel : %c\n", tolower('a'));
	printf("Test de a avec la fonction maison : %c\n", ft_tolower('a'));
	printf("Test de V avec la fonction officiel : %c\n", tolower('V'));
	printf("Test de V avec la fonction maison : %c\n", ft_tolower('V'));
	printf("Test de ; avec la fonction officiel : %c\n", tolower(';'));
	printf("Test de ; avec la fonction maison : %c\n", ft_tolower(';'));
	printf("Test de 7 avec la fonction officiel : %c\n", tolower('7'));
	printf("Test de 7 avec la fonction maison : %c\n", ft_tolower('7'));

} */
