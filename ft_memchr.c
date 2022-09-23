/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:08:01 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/23 20:22:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*mys;

	i = 0;
	mys = (char *)s;
	while (n > 0)
	{
		if (mys[i] == c)
			return ((void *)&mys[i]);
		i++;
		n--;
	}
	return (0);
}
