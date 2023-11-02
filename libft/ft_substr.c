/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:54:50 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/02 15:25:40 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;

	sub = malloc(len);
	if (sub == 0)
		return (0);
	while (*str && len > 0)
	{
		if (ft_strlen(str - 1) == start - 1)
		{
		ft_strlcpy(sub, str, len);
		len--;
		}
		str++;
		start++;
	}
	return (sub);
}
