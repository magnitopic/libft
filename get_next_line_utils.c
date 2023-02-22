/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:52:18 by alaparic          #+#    #+#             */
/*   Updated: 2023/02/22 17:59:16 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// TODO: Remove unecessary functions

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		a;
	int		b;
	int		i;

	if (!s2)
		return ((char *)s1);
	a = ft_strlen(s1);
	b = ft_strlen(s2);
	i = 0;
	str = malloc((a + b + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (a--)
	{
		str[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (b--)
		str[a++] = s2[i++];
	str[a] = '\0';
	return (str);
}

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != (unsigned char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (&str[i]);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	aux;
	char	*a;
	size_t	i;

	aux = count * size;
	if (aux == 1 && count != 1)
		return (NULL);
	ptr = malloc(aux);
	if (!ptr)
		return (NULL);
	a = ptr;
	i = 0;
	while (i < aux)
	{
		*a++ = '\0';
		i++;
	}
	return (ptr);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*mys;

	i = 0;
	mys = (unsigned char *)s;
	while (n > 0)
	{
		if (mys[i] == (unsigned char)c)
			return (&mys[i]);
		i++;
		n--;
	}
	return (0);
}
