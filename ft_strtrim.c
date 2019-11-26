/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:03:47 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/24 16:09:05 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	int		it;
	int		len;
	int		j;

	if (!s1)
		return (NULL);
	it = 0;
	len = ft_strlen(s1);
	while (in_set(s1[it], set))
		it++;
	while (len > 0 && in_set(s1[len - 1], set))
		len--;
	if (it > len)
		return (ft_strdup(""));
	else if (!(ret = (char*)malloc(len - it + 1)))
		return (NULL);
	j = 0;
	while (it < len)
		ret[j++] = s1[it++];
	ret[j] = '\0';
	return (ret);
}
