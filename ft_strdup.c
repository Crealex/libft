/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:31:41 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 11:43:41 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strdup(const char *s1)
{
	int i;
	int l;
	char *result;

	i = 0;
	l = 0;
	while(s1[l])
	{
		l++;
	}
	result = malloc(sizeof(char) * l + 1);
	if (result == NULL)
		return (0);
	while(s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/* #include <string.h>
#include <stdio.h>

int main()
{
	char src[20] = "test de la fonction";

	printf("La fonction officielle retourne : %s\n", strdup(src));
	printf("La fonction maison retourne : %s\n", ft_strdup(src));
}
 */
