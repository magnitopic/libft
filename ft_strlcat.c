/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:42:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/22 19:47:15 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen((char *)src);
	i = 0;
	j = dst_len;
	if (dst_len == 0)
		return (src_len);
	if (dstsize < dst_len)
		return (src_len + dstsize);
	while (src[j] && (dst_len + j) < dstsize)
		dst[i++] = src[j++];
	if ((dst_len + j) == dstsize && dst_len < dstsize)
		dst[--i] = '\0';
	else
		dst[i] = '\0';
	return (src_len + dst_len);
}
