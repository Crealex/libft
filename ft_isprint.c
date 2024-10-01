/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:30:05 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/01 14:04:48 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("test de h avec la fonction officielle : %d\n", isprint('h'));
	printf("test de h avec la fonction maison : %d\n", ft_isprint('h'));
	printf("test de '3' avec la fonction officielle : %d\n", isprint('3'));
	printf("test de '3' avec la fonction maison : %d\n", ft_isprint('3'));
	printf("test de S avec la fonction officielle : %d\n", isprint('S'));
	printf("test de S avec la fonction maison : %d\n", ft_isprint('S'));
	printf("test de ? avec la fonction officielle : %d\n", isprint('?'));
	printf("test de ? avec la fonction maison : %d\n", ft_isprint('?'));
	printf("test de 5 avec la fonction officielle : %d\n", isprint(5));
	printf("test de 5 avec la fonction maison : %d\n", ft_isprint(5));

} */
