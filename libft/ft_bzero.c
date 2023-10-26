/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:04:07 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/25 15:39:20 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>
#include <string.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = '\0';
		n--;
		str++;
	}
	return (*s);
}
int	main(void)
{
	char	str[] = "lghdfgjh";
	printf("OG function says = %s\n", bzero(str, 7));
	printf("FT function says = %s\n", ft_bzero(str, 7));
}
