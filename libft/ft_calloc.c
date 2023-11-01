/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:03 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/01 15:33:52 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	max;

	max = 4294967295 / count;
	if (max > size)
		return (0);
	ptr = malloc(count * size);
	if (ptr == '\0')
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}
