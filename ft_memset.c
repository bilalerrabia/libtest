/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 08:10:52 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/15 08:12:50 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// int main()
// {
// 	// char str[] = "bilal errabia";
// 	// long num1 = 999999999999;
// 	int num2 = 0;
// 	ft_memset(&num2, 5, 4);
// 	// ft_memset(&num2, 57, 1);
// 	// ft_memcpy(&num2, &num1, 8);
// 	// puts(str);
// 	printf("%d \n",num2);
// }