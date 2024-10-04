/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 12:13:06 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/04 14:46:17 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/* char	test(unsigned int i, const char c)
{
	 if (i % 2 == 0)
        return (c - 32);
    else
        return (c);
} */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	i = 0;
	res = malloc(sizeof(char) * len(s) + 1);
	if (res == NULL)
		return (0);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	return (res);
}

/* #include <stdio.h>

int main()
{
	char *text = "jetestemafonction";
	char *result = ft_strmapi(text, test);

	printf("Resultat : %s\n", result);
} */
