/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:57:57 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/07 19:10:54 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while ((*lst)->next != NULL)
	{
		temp = (*lst)->next;
		lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}
