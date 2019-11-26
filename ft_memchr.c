/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 15:43:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/06 17:40:59 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ps;

	ps = (unsigned char*)s;
	while (n)
	{
		if (*ps == (unsigned char)c)
			return (ps);
		ps++;
		n--;
	}
	return (NULL);
}
