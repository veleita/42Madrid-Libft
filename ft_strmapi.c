/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 18:07:56 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/15 18:47:35 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	int		it;

	if (!s)
		return (NULL);
	ret = malloc(ft_strlen(s) + 1);
	if (!(ret = malloc(ft_strlen(s) + 1)))
		return (NULL);
	it = 0;
	while (s[it])
	{
		ret[it] = f(it, s[it]);
		it++;
	}
	ret[it] = '\0';
	return (ret);
}
