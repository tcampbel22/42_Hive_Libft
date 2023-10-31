/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:10:31 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 19:00:32 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
		destlen = i;
	}
	while (src[j])
	{	
		j++;
		srclen = j;
	}
	return (srclen + destlen);
	if (dstsize == 0)
	{
		while (src[j] && --dstsize)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		dest[i] ='\0';
	}
	return (srclen + destlen);
}
