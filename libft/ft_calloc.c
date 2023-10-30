/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:40:03 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/30 16:04:19 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n > 0)
	{
		*str = '\0';
		n--;
		str++;
	}
	return (s);
}

void *ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count, size);
	return (ft_bzero(ptr, size));
}

int	main(void)
{
	int	i = 0;
	int	*array;
	array = ft_calloc(3, sizeof(int));
	while (i < 3)
	{	
		printf("%d", array[i]);
		i++;
	}
	free(array);
}

