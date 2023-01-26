/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberneli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:24:15 by aberneli          #+#    #+#             */
/*   Updated: 2021/11/02 13:32:35 by aberneli         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*out;

	i = ft_strlen(s1);
	out = malloc(i * sizeof(char) + 1);
	if (!out)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		out[i] = s1[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}
