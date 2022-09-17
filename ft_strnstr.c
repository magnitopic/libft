/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:26:00 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/17 19:07:47 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		c;
	int		c_aux;
	char	*haystack_pc;

	c = 0;
	c_aux = 0;
	haystack_pc = (char *)haystack;
	if (needle[0] == '\0')
		return (haystack_pc);
	while (haystack[c] && len > 0)
	{
		while (haystack[c + c_aux] == needle[c_aux] && haystack[c + c_aux])
			c_aux++;
		if (needle[c_aux] == '\0')
			return (haystack_pc + c);
		c++;
		len--;
		c_aux = 0;
	}
	return (0);
}
