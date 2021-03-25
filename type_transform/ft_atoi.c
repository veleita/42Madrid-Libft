/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 11:41:21 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/03/25 13:05:44 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ret;
	int	sign;

	sign = 1;
	ret = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
		|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		str++;
		if (*str == '-')
			sign = -1;
	}
	while (ft_isdigit(*str))
	{
		if (ft_isdigit(*(str + 1)))
			ret = (ret + (*str - '0')) * 10;
		else
			ret += *str - '0';
		str++;
	}
	return (ret * sign);
}
