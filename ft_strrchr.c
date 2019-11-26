/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:10:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/08 12:41:57 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int it;

	it = ft_strlen(s);
	while (it >= 0)
	{
		if (s[it] == (char)c)
			return ((char*)&s[it]);
		it--;
	}
	return (NULL);
}
