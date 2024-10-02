/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:47:00 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 13:12:07 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}

/* #include <stdio.h>
#include <ctype.h>

int main()
{
	printf("Test de a avec la fonction officiel : %c\n", toupper('a'));
	printf("Test de a avec la fonction maison : %c\n", ft_toupper('a'));
	printf("Test de V avec la fonction officiel : %c\n", toupper('V'));
	printf("Test de V avec la fonction maison : %c\n", ft_toupper('V'));
	printf("Test de ; avec la fonction officiel : %c\n", toupper(';'));
	printf("Test de ; avec la fonction maison : %c\n", ft_toupper(';'));
	printf("Test de 7 avec la fonction officiel : %c\n", toupper('7'));
	printf("Test de 7 avec la fonction maison : %c\n", ft_toupper('7'));

} */
