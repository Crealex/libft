/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:09:23 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/04 15:28:17 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	*res;
	int		i;

	res = ft_itoa(n);
	i = 0;
	while (res[i])
	{
		write(fd, &res[i], 1);
		i++;
	}
}
