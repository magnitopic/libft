/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:06:48 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/20 18:17:27 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
		len++;
	while (n >= 1)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		i;

	len = count_digits(n);
	str = malloc(len + 1 * sizeof(char));
	i = 0;
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (len--)
	{
		str[len] = '0' + (n % 10);
		n /= 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
int	main(void)
{
	int i = -85;
	printf("%s\n", ft_itoa(i));
	return (0);
}*/