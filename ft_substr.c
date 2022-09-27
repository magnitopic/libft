/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 18:11:00 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/27 19:08:33 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	int		i;

	i = 0;
	new_str = malloc((len + 1) * sizeof(char));
	if (!s || new_str == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (len--)
	{
		new_str[i] = s[start];
		i++;
		start++;
	}
	new_str[i] = '\0';
	return (new_str);
}
