/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:55:33 by alaparic          #+#    #+#             */
/*   Updated: 2023/02/22 18:43:26 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstprint_int(t_list *lst)
{
	t_list	*node;

	node = lst;
	while (node != NULL)
	{
		ft_printf("%i ", *(int *)(node -> content));
		node = node->next;
	}
}
