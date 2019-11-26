/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 10:27:30 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/13 10:45:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			it;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	it = 0;
	while (it < n)
	{
		pdst[it] = psrc[it];
		if (psrc[it] == (unsigned char)c)
			return ((void*)(pdst + it + 1));
		it++;
	}
	return (NULL);
}
