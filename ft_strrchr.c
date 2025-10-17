/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 14:34:15 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/15 14:40:46 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = my_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
