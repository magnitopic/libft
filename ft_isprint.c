/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 18:54:35 by alaparic          #+#    #+#             */
/*   Updated: 2022/09/12 18:54:37 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isprint(3));
	printf("%d\n", isprint(3));
	return (0);
}
*/