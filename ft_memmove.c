/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 11:48:17 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/13 11:14:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			it;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	it = 0;
	if (src == dst)
		return (dst);
	if (psrc < pdst)
	{
		while (len-- > 0)
		{
			pdst[len] = psrc[len];
		}
	}
	else
	{
		while (it < len)
		{
			pdst[it] = psrc[it];
			it++;
		}
	}
	return (pdst);
}
