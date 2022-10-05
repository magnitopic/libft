/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:33:06 by alaparic          #+#    #+#             */
/*   Updated: 2022/10/05 09:41:23 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lstcp;

	while ((*lst)->next != 0)
	{
		lstcp = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = lstcp;
	}
	ft_lstdelone((*lst), del);
	*lst = NULL;
}
