/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 10:23:49 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:51:19 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = 0;
	result = 0;
	while (src[result])
		result++;
	while (dst[j])
		j++;
	if (dstsize <= j)
		return (result + dstsize);
	result += j;
	while (src[i] && i < (j - (dstsize - 1)))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (result);
}

/* #include <stdio.h>

int main()
{
	const char src[15] = " ma fonction  ";
	char dest[20] = "Je teste";
	const char src2[15] = " ma fonction  ";
	char dest2[20] = "Je teste";
	size_t nb = 20;
	printf("la valeur retournee par la fonction officiel est : %lu\n",
	 strlcat(dest, src, nb));
	printf("La chaine copie est : %s\n", dest);
	printf("la valeur retournee par la fonction maison est : %lu\n",
	 ft_strlcat(dest2, src2, nb));
	printf("La chaine copie est : %s\n", dest2);
} */
