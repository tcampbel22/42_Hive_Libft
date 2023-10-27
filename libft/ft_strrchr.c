/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:28 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/27 14:38:05 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str)
		str++;
	while (*str >= 0)
	{
		if (*str == a)
			return ((char*)str);
	str--;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str1[] = "baaa0b0aaa";
	const char	str2[] = "";
	int	c = 'c';
	int	d = '\0';
	char* ret;
	char* ret1;
	char* ret2;
	char* ret3;

	ret = ft_strrchr(str1, c);
	ret1 = strrchr(str1, c);
	ret2 = ft_strrchr(str2, d);
	ret3 = strrchr(str2, d);
	printf("FT Function says = %s\n", ret);
	printf("OG Funtion says = %s\n", ret1);
	printf("FT Funtion says = %s\n", ret3);
	printf("OG Funtion says = %s\n", ret2);
}