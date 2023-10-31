/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcampbel <tcampbel@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:31:53 by tcampbel          #+#    #+#             */
/*   Updated: 2023/10/31 19:18:41 by tcampbel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
#include <ctype.h>
/*
//isalpha
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = '1';
	b = 'A';
	c = 'z';
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d", ft_isalpha(c));
}
*//*
//isalnum
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 5;
	b = 'a';
	c = -3;
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
}*/
/*
//isascii
int	main(void)
{
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
}*/
/*
//isprint
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = ' ';
	b = 'p';
	c = 9;
	printf("FT function says =%d\n", ft_isprint(a));
	printf("FT function says =%d\n", ft_isprint(b));
	printf("FT function says =%d\n", ft_isprint(c));
	printf("OG function says =%d\n", isprint(a));
	printf("OG function says =%d\n", isprint(b));
	printf("OG function says =%d\n", isprint(c));
}*/
/*
//isdigit
int	main(void)
{
	int	a;
	int	b;
	int	c;

	a = 5;
	b = 'a';
	c = -3;
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
}*/
/*
//strlen
int main(void)
{
	const char *str = "Hello";

	printf("FT Function says = %lu\n", ft_strlen(str));
	printf("OG Function says = %lu\n", strlen(str));
}*/
/*
//memset
int	main(void)
{
	char str[50] = "abcdefghijklmnop";
	printf("OG message = %s\n", str);
	memset(str + 5, '$', 10);
	printf("OG function says = %s\n", str);
	ft_memset(str + 5, '$', 10);
	printf("FT function says = %s\n", str);
}*/
/*
//bzero
int	main(void)
{
	char	str[] = "lghdfgjh";
	printf("OG function says = %s\n", bzero(str, 7));
	printf("FT function says = %s\n", ft_bzero(str, 7));
}*/
/*
//memcpy
int	main(void)
{
	char src[10] = "hello";
	char dest[10] = "";

	printf("OG Function says = %s\n", memcpy(src + 2, src, 4));
	printf("FT Function says = %s\n", ft_memcpy(src + 2, src, 4));
}*/
/*
//memmove
int	main(void)
{
	char src[] = "hello World";
	char dest[20] = "";

	printf("OG Function says = %s\n", memmove(dest, src, 4));
	printf("FT Function says = %s\n", ft_memmove(dest, src, 4));
	printf("OG Function says = %s\n", memmove(dest, src, 7));
	printf("FT Function says = %s\n", ft_memmove(dest, src, 7));
}*/
/*
//strlcpy
int	main(void)
{
//	char src[] = "hello";
//	char dest[6] = "dg";
//	size_t	len = 3;

//	printf("OG Function says = %lu\n", strlcpy(dest, src, len));
//	printf("FT Function says = %lu\n", ft_strlcpy(dest, src, len));
	char    scr[] = "12345689";
	char    dest[] = "";
	printf("%lu\n", ft_strlcpy(dest, scr, sizeof((char)dest)));
	printf("%lu", strlcpy(dest, scr, sizeof((char)dest)));
}*/
/*
//strlcat
int	main(void)
{
	char src[15] = "hellohello";
	char dest[15] = "hello";
	size_t	len = 5;

	printf("OG Function says = %lu\n", strlcat(dest, src, len));
	printf("FT Function says = %lu\n", ft_strlcat(dest, src, len));
}*/
/*
/tolower
int	main(void)
{
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
}*/
/*
//toupper
int	main(void)
{
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
}*/
/*
//strchr
int	main(void)
{
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
}*/
/*
//strrchrint	main(void)
{
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
}*/
/*
//strncmp
int	main(void)
{
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
}*/
/*
//memchr
int	main(void)
{
	const char	str1[] = "baaa0b0aaa";
	const char	str2[] = "";
	int	c = 'b';
	int	d = '\0';
	size_t n = 5;
	size_t m = 8;

	printf("FT Function says = %s\n", ft_memchr(str1, c, n));
	printf("OG Funtion says = %s\n", memchr(str1, c, n));
	printf("FT Funtion says = %s\n", ft_memchr(str2, d, m));
	printf("OG Funtion says = %s\n", memchr(str2, d, m));
}*/
/*
//memcmp
int	main(void)
{
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
}*/
/*
//strnstrint	main(void)
{
	char	hystck[] = "aaaaaaabobaaa";
	char	ndl[] = "bob";
	size_t	s = 10;

	printf("OG Function says = %s\n", strnstr(hystck, ndl, s));
	printf("FT Function says = %s\n", ft_strnstr(hystck, ndl, s));
}*/
/*
//atoi
int	main(void)
{
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
}*/
/*
//calloc
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
}*/
/*
//strdup
int	main(void)
{
	char *str = "Hello, I live inside Malloc now";

	printf("%s\n", ft_strdup(str));
}*/
