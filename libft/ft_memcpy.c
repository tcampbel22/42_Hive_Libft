/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:39:35 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/01 17:23:16 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*d;
	const char		*s;

	if (dest == 0 && src == 0)
		return (dest);
	d = dest;
	s = src;
	i = 0;
	while (d[i] && n > 0)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
