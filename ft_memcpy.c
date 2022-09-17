/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 18:11:52 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/17 12:42:24 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*dst_cpy;

	dst_cpy = (char *)dst;
	while (n > 0)
	{
		*dst_cpy = *(char *)src;
		dst_cpy++;
		src++;
		n--;
	}
	return (dst);
}
