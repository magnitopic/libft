/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:11:00 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/18 18:21:05 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;

	new_str = malloc(len * sizeof(char));
	i = 0;
	while (len > i && new_str != '\0')
	{
		new_str[i] = s[start];
		i++;
	}
	return (new_str);
}
