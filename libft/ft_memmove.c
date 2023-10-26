/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:22:33 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/26 11:20:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	unsigned char	*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	while (len > 0)
	{
		d[i] = s[i];
		len--;
	i++;
	}
	return (dst);
}
#include <stdio.h>

int	main(void)
{
	char src[] = "hello World";
	char dest[20] = "";

	printf("OG Function says = %s\n", memmove(dest, src, 4));
	printf("FT Function says = %s\n", ft_memmove(dest, src, 4));
	printf("OG Function says = %s\n", memmove(dest, src, 7));
	printf("FT Function says = %s\n", ft_memmove(dest, src, 7));
}
