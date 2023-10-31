/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:03 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 19:17:01 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n);

void *ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count, size);
	return (ft_bzero(ptr, size));
}
