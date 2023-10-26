/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:04:57 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/24 17:26:42 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>

int main(void)
{
	const char *str = "Hello";

	printf("FT Function says = %lu\n", ft_strlen(str));
	printf("OG Function says = %lu\n", strlen(str));
}*/
