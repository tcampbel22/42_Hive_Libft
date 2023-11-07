
#include "libft.h"

static int nb_count(long n)
{
	int	nb_len;

	nb_len = 0;
	while (n)
	{
		n /= 10;
		nb_len++;
	}
	return (nb_len);
}

static char *neg_str(long n, char *str, int nb_len)
{
	*str++ = '-';
	n *= -1;
	while (nb_len--)
	{
		str[nb_len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

static char *pos_str(long n, char *str, int nb_len)
{
	while (nb_len--)
	{
		str[nb_len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char *ft_itoa(int nb)
{
	char	*str;
	long	n;
	int	nb_len;
	int 	nb_end;

	n = nb;
	nb_len = nb_count(n);
	nb_end = nb_len;
	if(!(str = malloc(nb_len + 2)))
		return (NULL);
	if (n == 0)
	{
		return ("0");
	}
	if (n < 0)
	{
		neg_str(n, str, nb_len);
		str[nb_end + 1] = 0;
	}
	else if (n > 0)
	{
		pos_str(n, str, nb_len);
		str[nb_end] = 0;
	}
	return (str);
}
