/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:38:02 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/25 15:02:53 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int	i;
	unsigned char	*dest;

	dest = b;
	i = 0;
	while (len > 0)
	{
		*dest = c;
		dest++;
		len--;
	}
	return (b);
}
int	main(void)
{
	char str[50] = "abcdefghijklmnop";
	printf("OG message = %s\n", str);
	memset(str + 5, '$', 10);
	printf("OG function says = %s\n", str);
	ft_memset(str + 5, '$', 10);
	printf("FT function says = %s\n", str);
}
