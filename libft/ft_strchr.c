/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:48:02 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/27 11:35:37 by tcampbel         ###   ########.fr       */
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
	return (0);
}
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	str1[] = "aaaaaaabaa";
	const char	str2[] = "";
	int	c = 'b';
	int	d = 'h';
	char* ret;
	char* ret1;

	ret = ft_strchr(str1, c);
	ret = strchr(str1, c);
	ret1 = ft_strchr(str2, d);
	ret1 = strchr(str2, d);
	printf("OG Function says = %s\n", ret);
	printf("FT Funtion says = %s\n", ret);
	printf("OG Funtion says = %s\n", ret1);
	printf("FT Funtion says = %s", ret1);
}


