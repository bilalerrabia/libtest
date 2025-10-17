/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 08:56:29 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/16 08:58:26 by berrabia         ###   ########.fr       */
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

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		total_len;
	char	*res;

	total_len = my_strlen(s1);
	total_len += my_strlen(s2);
	res = malloc(total_len + 1);
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
