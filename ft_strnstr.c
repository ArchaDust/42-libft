/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:41:59 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/03 17:09:27 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(const char *hay, const char *needle)
{
	int	i;

	i = 0;
	while (hay[i] == needle[i] && needle[i] != '\0')
		i++;
	if (needle[i] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	nlen;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)hay);
	nlen = ft_strlen(needle);
	while (hay[i] != '\0' && (i + nlen) - 1 < len)
	{
		if (ft_cmp(&hay[i], needle))
			return ((char *)hay + i);
		i++;
	}
	return (NULL);
}
