/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:42:43 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 19:10:38 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

char *ft_strnstr(const char *hay, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return  (NULL);
	if (needle[j] == '\0')
		return ((char *) hay);
	while (hay[i])
	{ 
		while (hay[i + j] == needle[j] && (n - j) > 0)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *) hay + i);
		}
		i++;
		j = 0;
		n--;
	}
	return (0);
}
