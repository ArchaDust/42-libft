/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:30:45 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/02 13:31:09 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;
	char	*res;

	i = 0;
	ptr = (char *)s;
	if (c == '\0')
		return (ptr + ft_strlen(ptr));
	res = NULL;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (char)c)
			res = &ptr[i];
		i++;
	}
	return (res);
}
