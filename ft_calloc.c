/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:08:24 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/09 14:23:58 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		*tab;
	size_t	i;

	tab = malloc(size * count);
	i = 0;
	if (tab == NULL)
		return (0);
	ft_bzero(tab, (count * size));
	return ((void *)tab);
}
