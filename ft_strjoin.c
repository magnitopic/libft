/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 18:28:32 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/18 19:55:07 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*concat;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	concat = malloc(len * sizeof(char));
	concat = (char *)s1;
	ft_strlcat(concat, s2, len);
	return (concat);
}
