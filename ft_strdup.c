/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 06:49:38 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/16 06:56:07 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	my_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*res;
	size_t	len;
	size_t	i;

	len = my_strlen(s);
	i = 0;
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
