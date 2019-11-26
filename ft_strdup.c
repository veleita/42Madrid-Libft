/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:22:06 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/13 12:31:27 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	if ((s2 = malloc(ft_strlen(s1) + 1)))
	{
		ft_memcpy(s2, s1, ft_strlen(s1) + 1);
		return (s2);
	}
	else
		return (NULL);
}
