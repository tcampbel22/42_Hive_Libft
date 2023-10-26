/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:22:12 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/26 12:10:16 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (0);
	}
	while (src[i] && dstsize > 0)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	char src[] = "hello";
	char dest[6] = "";
	size_t	len = 6;

	printf("OG Function says = %lu\n", strlcpy(dest, src, len));
	printf("FT Function says = %lu\n", ft_strlcpy(dest, src, len));
}*/
