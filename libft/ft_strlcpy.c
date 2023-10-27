/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:22:12 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/26 18:23:47 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < (dstsize -1))
		{
		dst[i] = src[i];
		i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
#include <stdio.h>

int	main(void)
{
//	char src[] = "hello";
//	char dest[6] = "dg";
//	size_t	len = 3;

//	printf("OG Function says = %lu\n", strlcpy(dest, src, len));
//	printf("FT Function says = %lu\n", ft_strlcpy(dest, src, len));
	char    scr[] = "12345689";
	char    dest[] = "";
	printf("%lu\n", ft_strlcpy(dest, scr, sizeof((char)dest)));
	printf("%lu", strlcpy(dest, scr, sizeof((char)dest)));
}

