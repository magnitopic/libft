/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aggregate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 15:37:38 by alaparic          #+#    #+#             */
/*   Updated: 2023/03/06 16:09:20 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_agregate(int format, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, format);
	result = 0;
	while (format++)
		result += va_arg(ap, int);

	va_end(ap);
	return (result);
}