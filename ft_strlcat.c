/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:56:51 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/20 00:01:00 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t ret;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	ret = ft_strlen(src);
	if (!dstsize)
		return (ret);
	if (i < dstsize)
		ret += i;
	else
		return (ret + dstsize);
	j = 0;
	while (src[j] && i < (dstsize - 1))
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (ret);
}
