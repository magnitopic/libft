/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:22:35 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/23 16:03:56 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	int		i;
	int		s1_len;

	i = 0;
	s1_len = strlen(s1);
	s1_cpy = malloc(s1_len * sizeof(char));
	while (i < s1_len)
	{
		s1_cpy[i] = s1[i];
		i++;
	}
	return (s1_cpy);
}
