/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:26:59 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/15 17:08:15 by berrabia         ###   ########.fr       */
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	if (!src || !dst)
		return (0);
	d_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	s_len = my_strlen(src);
	if (d_len == size)
		return (size + s_len);
	i = 0;
	while (src[i] && d_len + i < size - 1)
	{
		dst[d_len + i] = src[i];
		i++;
	}
	if (d_len + i < size)
		dst[d_len + i] = '\0';
	return (d_len + s_len);
}
