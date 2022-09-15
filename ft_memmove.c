/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:30:46 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/13 19:30:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_cpy;

	dst_cpy = dst;
	while (len > 0)
	{
		*dst_cpy = *(char *)src;
		*(char *)src = 0;
		dst_cpy++;
		src++;
		len--;
	}
	return (dst);
}

int main(void)
{
	const char src[14] = "Hello There";
   	char dest[14]="Hedfgdgdafsfgs";
	memcpy(dest, src, 5);
	printf("%s\n", dest);
	printf("%s\n", src);
	return (0);
}