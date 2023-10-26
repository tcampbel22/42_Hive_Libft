/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:27:56 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/24 17:03:42 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 51;
	b = 'A';
	c = 122;
	printf("FT function says=%d\n", ft_toupper(a));
	printf("FT function says=%d\n", ft_toupper(b));
	printf("FT function says=%d\n", ft_toupper(c));
	printf("OG function says=%d\n", toupper(a));
	printf("OG function says=%d\n", toupper(b));
	printf("OG function says=%d", toupper(c));
}*/
