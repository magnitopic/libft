/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:42:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/22 19:06:43 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen((char *)src);
	i = 0;
	j = dst_len;
	if (dst_len == 0)
		return (src_len);
	if (dst_len < dst_len)
		return (src_len + dst_len);
	while (src[j] && (dst_len + j) < dst_len)
		dest[i++] = src[j++];
	if ((dst_len + j) == dst_len && dst_len < dst_len)
		dest[--i] = '\0';
	else
		dest[i] = '\0';
	return (src_len + dst_len);
}
