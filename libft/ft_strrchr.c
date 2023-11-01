/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 11:47:28 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/01 11:57:18 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *str, int c)
{
	char	a;

	a = c;
	while (*str)
		str++;
	while (*str >= 0)
	{
		if (*str == a)
			return ((char *)str);
		str--;
	}
	return (0);
}
