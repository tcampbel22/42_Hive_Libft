/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:41:05 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/27 15:05:53 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (*str1 == *str2 && *str1 && n--)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str1[] = "Hillo";
	const char	str2[] = "Hildo";
	const char	str3[] = "aaaaaaaaaaaaaaat";
	const char	str4[] = "aaaaaaaaaaaaaaaa";
	size_t	n = 2;
	size_t	p = 16;

	printf("OG Function says = %d\n", strncmp(str1, str2, n));
	printf("FT Function says = %d\n", ft_strncmp(str1, str2, n));
	printf("OG Function says = %d\n", strncmp(str3, str4, p));
	printf("FT Function says = %d\n", ft_strncmp(str3, str4, p));
}*/
