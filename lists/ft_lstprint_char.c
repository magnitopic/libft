/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:55:33 by alaparic          #+#    #+#             */
/*   Updated: 2023/02/22 18:42:57 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint_char(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node != NULL)
	{
		ft_printf("%c ", *(int *)(node -> content));
		node = node->next;
	}
}
