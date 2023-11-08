
#include "libft.h"


static int	count_str(const char *s, char c)
{
	unsigned int	count;

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

static int	fill_strings(char **result, const char *s, char c, unsigned int count)
{
	unsigned int	i;
	unsigned int	len;

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
			if (!(result[i] = malloc(len + 1)))
			{
				while (i < count)
				{
					free(result[i]);
					i++;
				}
			free(result);
			}
		}
		ft_strlcpy(result[i++], s - len, len + 1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result; //2D string array
	unsigned int	count; //number of string

	if (*s == 0)
		return (NULL);
	count = count_str(s, c);
	result = malloc(count + 1);
	if (!result)
		return (NULL);
	result[count] = 0;
	fill_strings(result, s, c, count);
	return (result);
}
