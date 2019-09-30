/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:14:49 by kmila             #+#    #+#             */
/*   Updated: 2019/09/26 14:44:50 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	if (s)
	{
		if (len + 1 == 0)
			return (0);
		if (!(sub = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		ft_memcpy(sub, s + start, len);
		sub[len] = '\0';
		return (sub);
	}
	return (0);
}
