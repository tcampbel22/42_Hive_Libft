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
	size_t	i;
	size_t	j;
	char	*tr_str;
	size_t	start;
	size_t	len;
	
	i = 0;
	j = 0;
	while (set[i])
	{
		i++;
		j++;
	}
	start = j;
	i = 0;
	while (set[i - 1] == s1[j - 1])
	{
		i--;
		j--;
	}
	len = j - start;
	tr_str = ft_substr(s1, start, len);
	return (tr_str);
}
