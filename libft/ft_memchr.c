/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 15:06:57 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 19:08:20 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, size_t n)
{
	char		a;
	const char	*str1;

	str1 = str;
	a = c;
	while (*str1 && n > 0)
	{
		if (*str1 == a)
			return ((char *)str1);
		str++;
		n--;
	}
	if (*str1 == a)
		return ((char *)str1);
	return (0);
}
