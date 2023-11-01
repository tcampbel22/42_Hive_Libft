/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:18:41 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/01 11:48:36 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_neg(const char *str, int neg)
{
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
		{
			neg = -1;
			return (neg);
		}
	}
	return (neg);
}

int	ft_atoi(const char *str)
{
	int		neg;
	long	num;
	long	prev;

	neg = 1;
	num = 0;
	prev = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	ft_is_neg(str, neg);
	while (*str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str - 48);
		str++;
		if (prev > num)
		{
			if (neg == 1)
				return (-1);
			return (0);
		}
		prev = num;
	}
	num *= neg;
	return ((int)num);
}
