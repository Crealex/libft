/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 14:31:19 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/04 14:45:59 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void(*f)(unsigned int, char*))
{
	int i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void    modify_char(unsigned int i, char *c)
{
	if (i >= 0 )
    	*c -= 32;
}

#include <stdio.h>

int main()
{
    char str[] = "hello";
    ft_striteri(str, modify_char);
    printf("%s\n", str);
    return 0;
}
 */
