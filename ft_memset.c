/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:44:50 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/20 18:58:41 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*a;
	unsigned char	c1;

	a = b;
	c1 = (unsigned char)c;
	while (len--)
	{
		*a = c;
		a++;
	}
	return (b);
}
