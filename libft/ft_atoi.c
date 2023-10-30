/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:18:41 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/30 14:39:52 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	neg_counter;
	int	num;

	neg_counter = 0;
	num = 0;
	while ((*str >= 9 && *str <= 13) || (*str == 32))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			neg_counter++;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num *= 10;
		num += *str - 48;
		str++;
	}
	if (neg_counter % 2 == 0)
		return (num);
	else
		return (-num);
	return (0);
}

int	main(void)
{
	const char str1[] = "3240793459846958643";
	const char str2[] = "   	57";
	const char str3[] = "-13764";

	printf("OG Function say = %d\n", atoi(str1));
	printf("OG Function say = %d\n", atoi(str2));
	printf("OG Function say = %d\n", atoi(str3));
	printf("FT Function say = %d\n", ft_atoi(str1));
	printf("FT Function say = %d\n", ft_atoi(str2));
	printf("FT Function say = %d\n", ft_atoi(str3));
}
