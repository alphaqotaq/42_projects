/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 10:39:19 by kmila             #+#    #+#             */
/*   Updated: 2019/09/04 10:55:38 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		counter(int min, int max)
{
	int count;

	count = 0;
	while (min < max)
	{
		count++;
		min++;
	}
	return (count);
}

int		*ft_range(int min, int max)
{
	int	*result;
	int count;
	int i;

	result = NULL;
	if (min >= max || max > 2147483647 || min < -2147483648)
		return (result);
	count = counter(min, max);
	if (!(result = (int *)malloc(sizeof(int) * count)))
		return (NULL);
	i = 1;
	result[0] = min;
	while (i < count)
	{
		result[i] = min + 1;
		min++;
		i++;
	}
	return (result);
}
