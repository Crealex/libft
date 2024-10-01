/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:39:18 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/01 14:04:43 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("Teste de 145 avec la fonction officielle : %d\n", isascii(145));
	printf("Teste de 145 avec la fonction maison : %d\n", ft_isascii(145));
	printf("Teste de A avec la fonction officielle : %d\n", isascii('A'));
	printf("Teste de A avec la fonction maison : %d\n", ft_isascii('A'));
	printf("Teste de g avec la fonction officielle : %d\n", isascii('g'));
	printf("Teste de g avec la fonction maison : %d\n", ft_isascii('g'));
	printf("Teste de : avec la fonction officielle : %d\n", isascii(':'));
	printf("Teste de : avec la fonction maison : %d\n", ft_isascii(':'));
	printf("Teste de '8' avec la fonction officielle : %d\n", isascii('8'));
	printf("Teste de '8' avec la fonction maison : %d\n", ft_isascii('8'));
	printf("Teste de 3 avec la fonction officielle : %d\n", isascii(3));
	printf("Teste de 3 avec la fonction maison : %d\n", ft_isascii(3));
} */
