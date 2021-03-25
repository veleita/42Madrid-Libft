/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:54:02 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/03/25 12:51:55 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int				digits;
	unsigned int	n_cpy;

	digits = 1;
	n_cpy = n;
	if (n == 0)
		return (digits);
	else if (n < 0)
	{
		digits++;
		n_cpy = -n_cpy;
	}
	while (n_cpy)
	{
		n_cpy /= 10;
		digits++;
	}
	return (digits - 1);
}

char	*ft_itoa(int n)
{
	char			*ret;
	int				digits;
	unsigned int	n_cpy;

	digits = count_digits(n);
	ret = malloc(digits);
	if (ret == NULL)
		return (NULL);
	ft_bzero(ret, digits);
	n_cpy = n;
	if (n < 0)
	{
		ret[0] = '-';
		n_cpy = -n_cpy;
	}
	ret[digits] = '\0';
	digits--;
	while (digits >= 0 && ret[digits] != '-')
	{
		ret[digits--] = n_cpy % 10 + '0';
		n_cpy /= 10;
	}
	return (ret);
}
