/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:34:44 by alaparic          #+#    #+#             */
/*   Updated: 2023/02/24 13:56:04 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	ft_lstget(t_list *lst, int pos)
{
	int		i;
	t_list	*node;

	node = lst;
	i = 0;
	while (i < pos - 1)
	{
		i++;
		node = node->next;
	}
	return (*node -> next);
}
