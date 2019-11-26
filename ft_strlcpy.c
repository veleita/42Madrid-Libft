/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:47:54 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/12 19:28:22 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	it;

	if (!(src || dst))
		return (0);
	it = 0;
	if (dstsize > 0)
	{
		while (src[it] && (dstsize - 1) > 0)
		{
			dst[it] = src[it];
			dstsize--;
			it++;
		}
		dst[it] = '\0';
	}
	return (ft_strlen(src));
}
