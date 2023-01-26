/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:17:29 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/03 02:36:32 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	slen;

	slen = ft_strlen(s);
	if (start >= slen)
		slen = 0;
	else if (slen < start + len)
		slen = slen - start;
	else
		slen = len;
	res = malloc(slen + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], slen + 1);
	return (res);
}
