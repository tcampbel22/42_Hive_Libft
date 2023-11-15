/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:18:41 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/15 17:55:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	convert_char(const char *str, int neg)
{
	long	num;
	size_t	max;

	num = 0;
	max = 0 - 1;
	while (*str >= 48 && *str <= 57)
	{
		if ((size_t)num > max / 10 - (*str - 48) && neg == 1)
			return (-1);
		if ((size_t)num > max / 10 - (*str - 48) && neg == -1)
			return (0);
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	num;

	neg = 1;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	if (*str == 43 || *str == 45)
	{
		if (*str == 45)
		{
			neg = -1;
		}
		str++;
	}
	num = convert_char(str, neg);
	num *= neg;
	return (num);
}
