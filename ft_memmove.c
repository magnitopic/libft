/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:30:46 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/18 12:47:00 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_cpy;

	dst_cpy = (char *)dst;
	while (len > 0)
	{
		*dst_cpy = *(char *)src;
		dst_cpy++;
		src++;
		len--;
	}
	return (dst);
}
