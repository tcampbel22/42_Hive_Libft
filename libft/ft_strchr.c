/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:48:02 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/27 15:22:13 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str)
	{
		if (*str == a)
			return ((char*)str);
	str++;
	}
	if (*str == a)
		return ((char*)str);
	return (0);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str1[] = "aaaaaaabaa";
	const char	str2[] = "fff";
	int	c = 'c';
	int	d = '\0';
	char* ret;
	char* ret1;
	char* ret2;
	char* ret3;
	char* ret4;

	ret = ft_strchr(str1, c);
	ret1 = strchr(str1, c);
	ret2 = ft_strchr(str2, d);
	ret3 = strchr(str2, d);
	ret4 = memchr(str1, c, 9);
	printf("OG Function says = %s\n", ret1);
	printf("FT Function says = %s\n", ret);
	printf("OG Function says = %s\n", ret3);
	printf("FT Function says = %s\n", ret2);
	printf("Memchr Function says = %s\n", ret4);
}


