/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:18:57 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/04 09:25:10 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n_start;
	t_list	*n_tmp;

	if (!lst)
		return (NULL);
	n_start = ft_lstnew((*f)(lst->content));
	if (!n_start)
		return (NULL);
	n_tmp = n_start;
	lst = lst->next;
	while (lst)
	{
		n_tmp->next = ft_lstnew((*f)(lst->content));
		if (!n_tmp->next)
		{
			ft_lstclear(&n_start, del);
			return (NULL);
		}
		n_tmp = n_tmp->next;
		lst = lst->next;
	}
	return (n_start);
}
