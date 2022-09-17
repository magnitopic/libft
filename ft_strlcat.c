/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:42:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/17 12:42:35 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>


size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	lendts;
	size_t	lensrc;
	size_t	cont;


	lendts = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (dstsize <= lendts)
		return (lensrc + dstsize);
	cont = lendts;
	while (*src != '\0' && cont < (dstsize - 1))
		*(dst + cont++) = *src++;
	*(dst + cont) = '\0';

	return (lendts + lensrc);
}

int	main(void)
{
	//char	src[20] = "There";
	//char	dest[20] = "Hello ";
	char	src2[20] = "There";
	char	dest2[20] = "Hello ";
	//printf("%d", ft_strlcat(dest, src, 5 ));
	printf("\n%lu", strlcat(dest2, src2, 20));
	printf("\n%s, %s", src2, dest2);
	return (0);
}