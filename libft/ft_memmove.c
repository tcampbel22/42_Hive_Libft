/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:22:33 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 18:53:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;
	char	*d;
	const char	*s;

	i = 0;
	d = dst;
	s = src;
	if (d > s)
	{
		while (len > 0)
		{
			d[len - 1] = s[len -1];
			len--;
		}
	}
	else if(d <= s)
	{
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}
