/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaparic <alaparic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 19:07:11 by alaparic          #+#    #+#             */
/*   Updated: 2022/10/06 18:35:16 by alaparic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*new_lst;

	if (!lst || !f || !del)
		return (NULL);
	aux = ft_lstnew(f(lst->content));
	if (!aux)
		return (NULL);
	new_lst = aux;
	lst = lst->next;
	while (lst)
	{
		aux->next = ft_lstnew(f(lst->content));
		if (!aux->next)
		{
			ft_lstdelone(lst, del);
			return (NULL);
		}
		aux = aux->next;
		lst = lst->next;
	}
	aux->next = NULL;
	return (new_lst);
}
