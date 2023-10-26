/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:56:02 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/24 17:09:44 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	a;
	int	b;
	int c;

	a = 65;
	b = 'J';
	c = 52;
	printf("FT function says = %d\n", ft_tolower(a));
	printf("FT function says = %d\n", ft_tolower(b));
	printf("FT function says = %d\n", ft_tolower(c));
	printf("OG function says = %d\n", tolower(a));
	printf("OG function says = %d\n", tolower(b));
	printf("OG function says = %d\n", tolower(c));
}*/
