/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:13:17 by kmila             #+#    #+#             */
/*   Updated: 2019/09/12 12:07:57 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	dignum(int n)
{
	int res;

	res = 0;
	if (n < 0)
	{
		n = n * (-1);
		res = 1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	char	*c;
	int		i;

	if (n < 0 && n - 1 > n)
		return (ft_strdup("-2147483648"));
	i = dignum(n);
	if (!(c = (char *)malloc(sizeof(char) * (dignum(n) + 1))))
		return (NULL);
	ft_bzero(c, i + 1);
	if (n < 0)
	{
		c[0] = '-';
		n = n * (-1);
	}
	i--;
	while (i)
	{
		c[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	if (!c[i])
		c[i] = n % 10 + '0';
	return (c);
}
