/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:38:02 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 18:48:03 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
