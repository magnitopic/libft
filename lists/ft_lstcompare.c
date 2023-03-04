/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcompare.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 16:42:00 by alaparic          #+#    #+#             */
/*   Updated: 2023/03/04 16:42:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstcompare(t_list *lst1, t_list *lst2)
{
	int	i;

	if (ft_lstsize(lst1) != ft_lstsize(lst2))
		return (0);
	i = 0;
	while (i < ft_lstsize(lst1))
	{
		if (*(int *)ft_get(lst1, i)->content != *(int *)ft_get(lst2, i)->content){
			return (0);
		}
		i++;
	}
	return (1);
}