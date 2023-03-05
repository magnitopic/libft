/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:55:33 by alaparic          #+#    #+#             */
/*   Updated: 2023/03/05 12:32:00 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * Function to print int values stored in lst
 */

void	ft_lstprint_int(t_list *lst)
{
	t_list	*node;

	if (lst == NULL)
	{
		ft_printf("NULL\n");
		return ;
	}
	node = lst;
	while (node != NULL)
	{
		ft_printf("%i ", *(int *)(node -> content));
		node = node->next;
	}
	ft_printf("\n");
}
