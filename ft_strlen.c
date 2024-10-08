/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:41:10 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 10:17:08 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int main ()
{
	char *text = "42 c cool";
	printf("Test du mot %s avec la fonction officiel :
	 %lu\n", text, strlen(text));
	printf("Test du mot %s avec la fonction maison :
	%zu\n", text, ft_strlen(text));
}
 */
