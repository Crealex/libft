/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:29:19 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 17:09:44 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	len = end - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, len + 1);
	return (res);
}

/* #include <stdio.h>

int main()
{
	const char text[22] = "  ., y.test de..,..  ";
	const char set[4] = ", .";
	printf("Test de la fonction set countfront %d et countback %d\n",
	 countsetfront(text, set), countsetback(text, set));
	printf("resultat : %s\n", ft_strtrim(text, set));
}
 */
