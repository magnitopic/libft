/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:09:55 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/17 16:23:39 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1cpy;
	char	*s2cpy;

	s1cpy = (char *)s1;
	s2cpy = (char *)s2;
	while (*s1cpy && *s2cpy && *s1cpy == *s2cpy && n > 0)
	{
		s1cpy++;
		s2cpy++;
		n--;
	}
	return (*s1cpy - *s2cpy);
}
