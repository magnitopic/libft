/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:46:34 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/21 15:18:08 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	char				*s_cpy;
	unsigned int		i;

	s_cpy = (char *)s;
	str = malloc(sizeof(char) * ft_strlen(s_cpy));
	i = 0;
	while (s_cpy[i] != '\0')
	{
		str[i] = f(i, s_cpy[i]);
		i++;
	}
	return (str);
}
