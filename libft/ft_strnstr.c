/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:42:43 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/30 12:38:31 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <string.h>

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

#include <stdio.h>

int	main(void)
{
	char	hystck[] = "aaaaaaabobaaa";
	char	ndl[] = "bob";
	size_t	s = 10;

	printf("OG Function says = %s\n", strnstr(hystck, ndl, s));
	printf("FT Function says = %s\n", ft_strnstr(hystck, ndl, s));
}
