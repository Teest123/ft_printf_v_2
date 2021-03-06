/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_five.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:35:13 by khafni            #+#    #+#             */
/*   Updated: 2020/02/24 02:37:18 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utills.h"

void
	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	g_return = g_return + 1;
}

void
	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return ;
	}
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}

char
	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (str[i] != '\0')
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	if ((unsigned char)c == '\0')
		return (str + i);
	return (NULL);
}

char
	*ft_strdup(const char *s1)
{
	int		len;
	char	*str;

	len = 0;
	if (!s1)
		return (NULL);
	if (s1)
		len = ft_strlen(s1);
	if (!(str = (char *)malloc(len + 1)))
		return (NULL);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	return ((char *)ft_memcpy(str, s1, len));
}

size_t
	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = ft_strlen(src);
	if (size >= 1)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (j);
}
