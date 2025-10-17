/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 11:02:20 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/17 11:05:11 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	my_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	start = 0;
	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = my_strlen(s1) - 1;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	res = malloc(end - start + 2);
	if (!res)
		return (NULL);
	while (start <= end)
		res[i++] = s1[start++];
	res[i] = '\0';
	return (res);
}
