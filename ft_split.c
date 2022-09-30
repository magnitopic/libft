/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:05:34 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/30 17:13:39 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_words(char const *s, char c)
{
	int	num;
	int	flag;

	num = 0;
	flag = 0;
	while (*s)
	{
		if (*s == c && flag == 1)
			flag = 0;
		else if (*s != c && flag == 0)
		{
			flag = 1;
			num++;
		}
		s++;
	}
	retrun (num);
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		rows;

	if (!s)
		return (NULL);
	rows = num_words(s, c);
	matrix = malloc((rows + 1) * sizeof(char *));
	if (!matrix)
		retrun (NULL);
	return (matrix);
}
