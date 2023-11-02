/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:53 by tcampbel          #+#    #+#             */
/*   Updated: 2023/11/02 14:34:13 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_bzero(void *s, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
char	*ft_strnstr(const char *hay, const char *needle, size_t n);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *src);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

int	main(void)
{
/*
//isalpha
	int	a;
	int	b;
	int	c;

	a = '1';
	b = 'A';
	c = 'z';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d", ft_isalpha(c));

//isalnum
	int	a;
	int	b;
	int	c;

	a = 5;
	b = 'a';
	c = -3;
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(a));
	printf("%d\n", isalnum(b));
	printf("%d\n", isalnum(c));

//isascii
	int	a;
	int	b;
	int	c;

	a = '	';
	b = 129;
	c = '!';
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", isascii(a));
	printf("%d\n",isascii(b));
	printf("%d\n",isascii(c));

//isprint
	int	a;
	int	b;
	int	c;

	a = ' ';
	b = '~';
	c = 9;
	printf("FT function says =%d\n", ft_isprint(a));
	printf("FT function says =%d\n", ft_isprint(b));
	printf("FT function says =%d\n", ft_isprint(c));
	printf("OG function says =%d\n", isprint(a));
	printf("OG function says =%d\n", isprint(b));
	printf("OG function says =%d\n", isprint(c));

//isdigit

	int	a = '5';
	int	b = 'a';
	int	c = -3;

	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", isdigit(a));
	printf("%d\n", isdigit(b));
	printf("%d\n", isdigit(c));

//strlen

	const char *str = "Hello";

	printf("FT Function says = %lu\n", ft_strlen(str));
	printf("OG Function says = %lu\n", strlen(str));

//memset
//
	char str[50] = "abcdefghijklmnop";
	printf("OG message = %s\n", str);
	memset(str + 5, '$', 10);
	printf("OG function says = %s\n", str);
	ft_memset(str + 5, '$', 10);
	printf("FT function says = %s\n", str);

//bzero

	char	str[] = "lghdfgjh";
	printf("OG function says = %s\n", bzero(str, 7));
	printf("FT function says = %s\n", ft_bzero(str, 7));


//memcpy

	char src[5] = "12345";
	char dest[20] = "abcde";
	char src1[] = "hello";
	char dest1[] = "dfgfdg";

	printf("OG Function says = %s\n", memcpy(dest, src, 3));
	printf("FT Function says = %s\n", ft_memcpy(dest, src, 3));
	printf("OG Function says = %s\n", memcpy(dest1, src1, 3));
	printf("FT Function says = %s\n", ft_memcpy(dest1, src1, 3));

//memmove

	char src3[5] = "12345";
	char dest3[20] = "abcde";
	char src4[] = "hello";
	char dest4[] = "dfgfdg";

	printf("OG Function says = %s\n", memmove(dest3, src3, 3));
	printf("FT Function says = %s\n", ft_memmove(dest3, src3, 3));
	printf("OG Function says = %s\n", memmove(dest4, src4, 3));
	printf("FT Function says = %s\n", ft_memmove(dest4, src4, 3));

//strlcpy

	char src[] = "hello";
	char dest[6] = "dg";
	size_t	len = 3;
	
	printf("OG Function says = %lu\n", strlcpy(dest, src, len));
	printf("FT Function says = %lu\n", ft_strlcpy(dest, src, len));
	char    scr[] = "12345689";
	char    dest[] = "";
	printf("%lu\n", ft_strlcpy(dest, scr, sizeof((char)dest)));
	printf("%lu", strlcpy(dest, scr, sizeof((char)dest)));

//strlcat

	char src[15] = "hellohello";
	char dest[15] = "hello";
	size_t	len = 5;

	printf("OG Function says = %lu\n", strlcat(dest, src, len));
	printf("FT Function says = %lu\n", ft_strlcat(dest, src, len));
}

//tolower

	int	a;
	int	b;
	int c;

	a = 65;
	b = 'J';
	c = 52;
	printf("FT function says = %d\n", ft_tolower(a));
	printf("FT function says = %d\n", ft_tolower(b));
	printf("FT function says = %d\n", ft_tolower(c));
	printf("OG function says = %d\n", tolower(a));
	printf("OG function says = %d\n", tolower(b));
	printf("OG function says = %d\n", tolower(c));

//toupper

	int	a;
	int	b;
	int	c;

	a = 51;
	b = 'A';
	c = 122;
	printf("FT function says=%d\n", ft_toupper(a));
	printf("FT function says=%d\n", ft_toupper(b));
	printf("FT function says=%d\n", ft_toupper(c));
	printf("OG function says=%d\n", toupper(a));
	printf("OG function says=%d\n", toupper(b));
	printf("OG function says=%d", toupper(c));

//strchr

	const char	str1[] = "aaaaaaabaa";
	const char	str2[] = "fff";
	int	c = 'c';
	int	d = '\0';
	char* ret;
	char* ret1;
	char* ret2;
	char* ret3;
	char* ret4;

	ret = ft_strchr(str1, c);
	ret1 = strchr(str1, c);
	ret2 = ft_strchr(str2, d);
	ret3 = strchr(str2, d);
	ret4 = memchr(str1, c, 9);
	printf("OG Function says = %s\n", ret1);
	printf("FT Function says = %s\n", ret);
	printf("OG Function says = %s\n", ret3);
	printf("FT Function says = %s\n", ret2);
	printf("Memchr Function says = %s\n", ret4);

//strrchr

	const char	str1[] = "baaa0b0aaa";
	const char	str2[] = "";
	int	c = 'b';
	int	d = '\0';
	char* ret = ft_strrchr(str1, c);
	char* ret1 = strrchr(str1, c);
	char* ret2 = ft_strrchr(str2, d);
	char* ret3 = strrchr(str2, d);

	printf("FT Function says = %s\n", ret);
	printf("OG Function says = %s\n", ret1);
	printf("FT Function says = %s\n", ret3);
	printf("OG Function says = %s\n", ret2);

//strncmp

	const char	str1[] = "Hillo";
	const char	str2[] = "Hildo";
	const char	str3[] = "aaaaaaaaaaaaaaat";
	const char	str4[] = "aaaaaaaaaaaaaaaa";
	size_t	n = 2;
	size_t	p = 16;

	printf("OG Function says = %d\n", strncmp(str1, str2, n));
	printf("FT Function says = %d\n", ft_strncmp(str1, str2, n));
	printf("OG Function says = %d\n", strncmp(str3, str4, p));
	printf("FT Function says = %d\n", ft_strncmp(str3, str4, p));

//memchr

	const char	str1[10] = "";
	const char	str2[] = "llhl";
	int	c = 'b';
	int	d = '\0';
	size_t n = 5;
	size_t m = 8;

	printf("FT Function says = %s\n", ft_memchr(str1, c, n));
	printf("OG Funtion says = %s\n", memchr(str1, c, n));
	printf("FT Funtion says = %s\n", ft_memchr(str2, d, m));
	printf("OG Funtion says = %s\n", memchr(str2, d, m));

//memcmp

	int	str1[] = {1,2,3,4,5,10};
	int	str2[] = {1,2,3,4,5,12};
	const char	str3[] = "aaaaaaaaaaaaaaaa";
	const char	str4[] = "aaaataaaaaaaa";
	size_t	n = 30;
	size_t	p = 16;

	printf("OG Function says = %d\n", memcmp(str1, str2, n));
	printf("FT Function says = %d\n", ft_memcmp(str1, str2, n));
	printf("OG Function says = %d\n", memcmp(str3, str4, p));
	printf("FT Function says = %d\n", ft_memcmp(str3, str4, p));

//strnstr

	char	hystck[] = "aaaaaaabobaaa";
	char	ndl[] = "bob";
	size_t	s = 10;

	printf("OG Function says = %s\n", strnstr(hystck, ndl, s));
	printf("FT Function says = %s\n", ft_strnstr(hystck, ndl, s));


//atoi

	const char str1[] = "-9223372036854775809";
	const char str2[] = "	 57";
	const char str3[] = "9223372036854775808";
	const char str4[] = "--42";

	printf("OG Function = %d\n", atoi(str1));
	printf("OG Function = %d\n", atoi(str2));
	printf("OG Function = %d\n", atoi(str3));
	printf("OG Function = %d\n\n", atoi(str4));
	printf("FT Function = %d\n", ft_atoi(str1));
	printf("FT Function = %d\n", ft_atoi(str2));
	printf("FT Function = %d\n", ft_atoi(str3));
	printf("FT Function = %d\n", ft_atoi(str4));
*/
//calloc
/*
	char	*array;
	char	*array1;

	array = "MMMMMMMMMM";
	array1 = "MMMMMMMMMM";
	printf("%s\n", array);
	printf("%s\n", array1);
//	array = ft_calloc(4294967295, sizeof(int));
	array1 = calloc(4294967295, sizeof(int));
//	printf("%s\n", array);
	printf("%s", array1);
//	free(array);
	free(array1);

//strdup

	char *str = "";
	char *str2 = "Fuck you, I hate malloc";
	printf("FT = %s\n", ft_strdup(str));
	printf("OG = %s\n", strdup(str));
	printf("FT = %s\n", ft_strdup(str2));
	printf("OG = %s\n", strdup(str2));

//putchar_fd

	char	c = 'a';
	char	d = 9;
	int	fd = 2;
	int	fd1 = 1;

	ft_putchar_fd(c, fd);
	ft_putchar_fd(d, fd1);

//putstr_fd

	char	str[] = "Hello";
	char	str1[] = "World	";

	ft_putstr_fd(str, 1);
	write(1, "\n", 1);
	ft_putstr_fd(str1, 2);

//putendl_fd

	char	str[] = "Hello";
	char	str1[] = "World	";

	ft_putendl_fd(str, 1);
	ft_putendl_fd(str1, 2);

//putnbr_fd
*/
	int	nb = -0;
	int nb1 = 6709;
	int nb2 = -97795988;
	int nb3 = 2147483647;
	int nb4 = -2147483648;

	ft_putnbr_fd(nb, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(nb1, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(nb2, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(nb3, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(nb4, 1);
}
