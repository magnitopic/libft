/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmin.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 16:16:15 by alaparic          #+#    #+#             */
/*   Updated: 2023/03/08 16:26:23 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstmin(void *lst)
{
	int	i;
	int	lst_size;
	int	min;

	i = 0;
	lst_size = ft_lstsize(lst);
	while (i < lst_size)
	{
		if (*(int *)ft_get(lst, i)->content < min)
			min = *(int *)ft_get(lst, i)->content;
		i++;
	}
	return (min);
}
