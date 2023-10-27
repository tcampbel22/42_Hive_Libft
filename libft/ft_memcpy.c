/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:39:35 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/26 16:09:03 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int				i;
	unsigned char	*d;
	const char		*s;

	d = dest;
	s = src;
	i = 0;
	while (s[i] && n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
#include <stdio.h>

int	main(void)
{
	char src[10] = "hello";
//	char dest[10] = "";

	printf("OG Function says = %s\n", memcpy(src + 2, src, 4));
	printf("FT Function says = %s\n", ft_memcpy(src + 2, src, 4));
}
