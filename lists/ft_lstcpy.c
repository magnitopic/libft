/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:18:51 by alaparic          #+#    #+#             */
/*   Updated: 2023/02/27 16:02:55 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstcpy(t_list *sorce)
{
	int		i;
	t_list	*new_lst;
	int		*aux;

	if (!ft_lstsize(sorce))
		return (NULL);
	i = 0;
	aux = malloc(sizeof(int));
	*aux = *(int *)ft_get(sorce, i++)->content;
	new_lst = ft_lstnew(&*aux);
	while (i < ft_lstsize(sorce))
	{
		aux = malloc(sizeof(int));
		*aux = *(int *)ft_get(sorce, i++)->content;
		ft_lstadd_back(&new_lst, ft_lstnew(&*aux));
	}
	ft_printf("\n");
	return (new_lst);
}
