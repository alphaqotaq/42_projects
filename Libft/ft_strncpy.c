/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:08:05 by kmila             #+#    #+#             */
/*   Updated: 2019/09/05 16:17:11 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*res;
	size_t	n;

	n = 0;
	res = dst;
	while (*src && n < len)
	{
		*dst = *src;
		dst++;
		src++;
		n++;
	}
	while (n < len)
	{
		*dst = '\0';
		dst++;
		n++;
	}
	return (res);
}
