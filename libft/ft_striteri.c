
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned char	*str;
	size_t	len;
	
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	while (*s)
	{
		f(len, *s)
		s++;
	}
}
