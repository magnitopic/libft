/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:40:20 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/13 19:40:21 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	num;
	int	sign;

	i = 0;
	num = 0;
	sign = 1;
	while (!ft_isdigit(nptr[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

/*
int	main(void)
{
	printf("%d\n", ft_atoi("    \t -+-1234ab567"));
	printf("%d\n", atoi("    \t 1234ab567"));
	return (0);
}
*/