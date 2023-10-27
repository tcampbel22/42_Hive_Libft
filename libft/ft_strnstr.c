/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 17:42:43 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/27 18:21:35 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <string.h>

char *ft_strnstr(const char *hay, const char *nee, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (n == 0)
		return  (NULL);
	if (nee[j] == '\0')
		return ((char *) hay);
	while (hay[i])
	{
		while (hay[i] == nee[j])
		{
			i++;
			j++;
		}
		i++;
		n--;
		return ((char *) nee);
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	hystck[] = "aaaaaaabobaaa";
	char	ndl[] = "bob";
	size_t	s = 9;

	printf("OG Function says = %s\n", strnstr(hystck, ndl, s));
	printf("FT Function says = %s\n", ft_strnstr(hystck, ndl, s));
}
