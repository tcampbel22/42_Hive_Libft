/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 15:01:30 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/03 18:41:13 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*len;
	
	start = s1;
	len = ft_strlen(s1) + s1;
	if (!s1 || !set)
		return (NULL);
	if (*set)
		return ((char *)s1);
	while (ft_strchr(set, *start))
			start++;
	while (ft_strchr(set, *len))
		len--;
	return(ft_substr(s1, start - s1, len - start + 1));
}
