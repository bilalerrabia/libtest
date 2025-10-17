/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 09:57:21 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/16 10:20:13 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	words_count(const char *s, char c)
{
	size_t	res;
	size_t	i;

	i = 0;
	res = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			res++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (res);
}

char	**return_empty(void)
{
	char	**res;

	res = malloc(sizeof(char *));
	res[0] = NULL;
	return (res);
}

char	*get_word(const char *s, size_t *i, char c)
{
	size_t	j;
	size_t	k;
	char	*res;

	j = *i;
	k = 0;
	while (s[j] && s[j] != c)
		j++;
	res = malloc((j - *i + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (*i < j)
	{
		res[k] = s[*i];
		(*i)++;
		k++;
	}
	res[k] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	size_t	i;
	size_t	j;
	char	**res;

	if (!s)
		return (return_empty());
	i = 0;
	j = 0;
	words = words_count(s, c);
	if (words == 0)
		return (return_empty());
	res = malloc((words + 1) * (sizeof(char *)));
	if (!res)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			res[j++] = get_word(s, &i, c);
	}
	res[j] = NULL;
	return (res);
}
