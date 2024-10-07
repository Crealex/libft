/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:30:11 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/07 17:58:05 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) 
	|| (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("teste de 2 avec la fonction officielle : %d\n", isalnum('2'));
	printf("teste de 2 avec la fonction maison : %d\n", isalnum('2'));
	printf("teste de H avec la fonction officielle : %d\n", isalnum('H'));
	printf("teste de H avec la fonction maison : %d\n", isalnum('H'));
	printf("teste de x avec la fonction officielle : %d\n", isalnum('x'));
	printf("teste de x avec la fonction maison : %d\n", isalnum('x'));
	printf("teste de 8 avec la fonction officielle : %d\n", isalnum('8'));
	printf("teste de 8 avec la fonction maison : %d\n", isalnum('8'));
	printf("teste de . avec la fonction officielle : %d\n", isalnum('.'));
	printf("teste de . avec la fonction maison : %d\n", isalnum('.'));
}
 */
