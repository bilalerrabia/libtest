/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 06:57:26 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/16 07:04:11 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*ptr;

	if (size != 0 && nmemb > (4294967295 / size))
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

// int main(){
// 	int *tab = calloc(4, 4294967295);
// }