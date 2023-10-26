/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:53:08 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/24 16:27:11 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if  (c >= ' ' && c <= 'z')
		return (1);
	return (0);
}
/*#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ' ';
	b = 'p';
	c = 9;
	printf("FT function says =%d\n", ft_isprint(a));
	printf("FT function says =%d\n", ft_isprint(b));
	printf("FT function says =%d\n", ft_isprint(c));
	printf("OG function says =%d\n", isprint(a));
	printf("OG function says =%d\n", isprint(b));
	printf("OG function says =%d\n", isprint(c));
}*/

