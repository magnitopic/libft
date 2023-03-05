/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:34:44 by alaparic          #+#    #+#             */
/*   Updated: 2023/03/05 12:37:08 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Function that returns the `pos` element in the `lst` list
 */

t_list	*ft_get(t_list *lst, int pos)
{
	int		i;
	t_list	*node;

	node = lst;
	i = 0;
	while (i < pos)
	{
		i++;
		node = node->next;
	}
	return (node);
}
