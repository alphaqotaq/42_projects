/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 12:00:33 by kmila             #+#    #+#             */
/*   Updated: 2019/09/18 13:45:29 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long	res;
	long long	tmp;
	int			sign;

	sign = 1;
	res = 0;
	tmp = 0;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9' && *str)
	{
		tmp = (long long)(res * 10 + *str++ - '0');
		if (res > tmp && sign > 0)
			return (-1);
		if (res > tmp && sign < 0)
			return (0);
		res = tmp;
	}
	return ((int)(res * sign));
}
