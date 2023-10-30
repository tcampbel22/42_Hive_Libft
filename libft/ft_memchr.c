/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:06:57 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/30 15:29:15 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		a;
	const char	*str1;

	str1 = str;
	a = c;
	while (*str1 && n > 0)
	{
		if (*str1 == a)
			return ((char *)str1);
		str++;
		n--;
	}
	if (*str1 == a)
		return ((char *)str1);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char	str1[] = "baaa0b0aaa";
	const char	str2[] = "";
	int	c = 'b';
	int	d = '\0';
	size_t n = 5;
	size_t m = 8;

	printf("FT Function says = %s\n", ft_memchr(str1, c, n));
	printf("OG Funtion says = %s\n", memchr(str1, c, n));
	printf("FT Funtion says = %s\n", ft_memchr(str2, d, m));
	printf("OG Funtion says = %s\n", memchr(str2, d, m));
}*/
