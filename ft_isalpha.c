/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:22:47 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/01 14:04:18 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("Teste de 18 avec la fonction officielle : %d\n", isalpha(18));
	printf("Teste de 18 avec la fonction maison : %d\n", ft_isalpha(18));
	printf("Teste de A avec la fonction officielle : %d\n", isalpha('A'));
	printf("Teste de A avec la fonction maison : %d\n", ft_isalpha('A'));
	printf("Teste de g avec la fonction officielle : %d\n", isalpha('g'));
	printf("Teste de g avec la fonction maison : %d\n", ft_isalpha('g'));
	printf("Teste de : avec la fonction officielle : %d\n", isalpha(':'));
	printf("Teste de : avec la fonction maison : %d\n", ft_isalpha(':'));

} */
