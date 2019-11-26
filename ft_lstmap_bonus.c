/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 17:53:42 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/26 10:32:57 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cpy;
	t_list	*first;

	if (!lst)
		return (NULL);
	if (!(first = ft_lstnew(f(lst->content))))
		return (NULL);
	cpy = first;
	lst = lst->next;
	while (lst)
	{
		if (!(cpy->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&first, del);
			return (NULL);
		}
		cpy = cpy->next;
		lst = lst->next;
	}
	return (first);
}
