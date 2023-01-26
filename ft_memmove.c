/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:16:35 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/03 19:28:37 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dst || !src || !n)
		return (dst);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (d <= s)
		return (ft_memcpy(dst, src, n));
	i = n - 1;
	while (i > 0)
	{
		d[i] = s[i];
		i--;
	}
	d[i] = s[i];
	return (dst);
}
