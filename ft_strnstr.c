/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:16:34 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/08 12:42:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int ith;
	unsigned int itn;

	if (!*needle)
		return ((char*)haystack);
	ith = 0;
	while (haystack[ith] != '\0' && (size_t)ith < len)
	{
		if (haystack[ith] == needle[0])
		{
			itn = 1;
			while (needle[itn] != '\0' && haystack[itn + ith] == needle[itn] &&
					(size_t)(ith + itn) < len)
				itn++;
			if (needle[itn] == '\0')
				return ((char*)&haystack[ith]);
		}
		ith++;
	}
	return (NULL);
}
