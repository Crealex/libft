/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:58:47 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/01 12:27:25 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int main()
{
	printf("Teste de 4 avec la fonction officielle : %d\n", isdigit('4'));
	printf("Teste de 4 avec la fonction maison : %d\n", ft_isdigit('4'));
	printf("Teste de g avec la fonction officielle : %d\n", isdigit('g'));
	printf("Teste de g avec la fonction maison : %d\n", ft_isdigit('g'));
	printf("Teste de , avec la fonction officielle : %d\n", isdigit(','));
	printf("Teste de , avec la fonction maison : %d\n", ft_isdigit(','));
} */
