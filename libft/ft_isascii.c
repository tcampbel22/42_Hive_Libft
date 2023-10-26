/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:10:22 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/24 16:07:41 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
#include <stdio.h>
#include <ctype.h>
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = '	';
	b = 129;
	c = '!';
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(a));
	printf("%d\n",isascii(b));
	printf("%d\n",isascii(c));
}
