/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: berrabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:14:04 by berrabia          #+#    #+#             */
/*   Updated: 2025/10/16 15:14:43 by berrabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*res;

	num = n;
	len = count_digits(num);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (num == 0)
		res[0] = '0';
	if (num < 0)
	{
		res[0] = '-';
		num = -num;
	}
	while (num)
	{
		res[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (res);
}
