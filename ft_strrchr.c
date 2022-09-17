/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:16:41 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/17 12:38:42 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = 0;
	while(s[len_s])
		len_s++;
	while (len_s >= 0)
	{
		if (s[len_s] == c)
			return ((char *)&s[len_s]);
		len_s--;
	}
	return (0);
}
