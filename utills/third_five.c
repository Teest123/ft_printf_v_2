/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   third_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khafni <khafni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 02:37:37 by khafni            #+#    #+#             */
/*   Updated: 2020/02/24 02:39:17 by khafni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utills.h"

size_t
	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void
	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	const char		*s;
	char			*d;

	if (!dst && !src)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	s = (const char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

void
	ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', fd);
	}
}

void
	ft_putnbr_long(long n)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putnbr_fd(nb % 10, 1);
	}
	if (nb < 10)
	{
		ft_putchar_fd(nb + '0', 1);
	}
}
