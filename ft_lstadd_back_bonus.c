/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 20:54:10 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/22 11:46:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *newlst)
{
	t_list		*last;

	if (alst && *alst && newlst)
	{
		if (!(*alst)->next)
			(*alst)->next = newlst;
		else
		{
			last = ft_lstnew(ft_lstlast(*alst)->content);
		}
	}
	else if (alst && newlst)
		*alst = newlst;
}
