/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 16:33:56 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/30 15:29:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *) str1;
	s2 = (unsigned char *) str2;
	while (*s1 == *s2 && n--)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	int	str1[] = {1,2,3,4,5,10};
	int	str2[] = {1,2,3,4,5,12};
	const char	str3[] = "aaaaaaaaaaaaaaaa";
	const char	str4[] = "aaaataaaaaaaa";
	size_t	n = 30;
	size_t	p = 16;

	printf("OG Function says = %d\n", memcmp(str1, str2, n));
	printf("FT Function says = %d\n", ft_memcmp(str1, str2, n));
	printf("OG Function says = %d\n", memcmp(str3, str4, p));
	printf("FT Function says = %d\n", ft_memcmp(str3, str4, p));
}
