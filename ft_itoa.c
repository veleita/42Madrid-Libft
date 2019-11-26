/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 12:54:02 by mzomeno-          #+#    #+#             */
/*   Updated: 2019/11/19 23:59:53 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digits(int n)
{
	int				digits;
	unsigned int	nb;

	digits = 1;
	if (n == 0)
		return (digits);
	else if (n < 0)
	{
		nb = -n;
		digits++;
		while (nb /= 10)
			digits++;
	}
	else
		while (n /= 10)
			digits++;
	return (digits);
}

char		*ft_itoa(int n)
{
	char			*ret;
	int				digits;
	unsigned int	nb;

	digits = ft_digits(n);
	if (!(ret = malloc(digits + 1)))
		return (NULL);
	if (n < 0)
	{
		ret[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	ret[digits--] = '\0';
	while (digits >= 0 && ret[digits] != '-')
	{
		ret[digits--] = nb % 10 + '0';
		nb /= 10;
	}
	return (ret);
}
