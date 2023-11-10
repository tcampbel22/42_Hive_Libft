/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 10:05:00 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/10 18:28:04 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

static int	fill_strings(char **result, const char *s, char c, size_t count)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s == c)
			s++;
		while (*s != c && *s)
		{
			len++;
			s++;
		}
		if (len > 0)
		{
			result[i] = malloc(len + 1);
			if (!result[i])
			{
				while (i < count)
				{
					free(result[i]);
					i--;
				}
				free(result);
				return (0);
			}
		}
		ft_strlcpy(result[i++], s - len, len + 1);
	}
	result[count] = 0;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;

	if (*s == 0)
		return (NULL);
	count = count_str(s, c);
	result = malloc(count + 1);
	if (!result)
		return (NULL);
	fill_strings(result, s, c, count);
	return (result);
}
