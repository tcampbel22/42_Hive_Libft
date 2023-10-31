/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:39:35 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 18:51:41 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
