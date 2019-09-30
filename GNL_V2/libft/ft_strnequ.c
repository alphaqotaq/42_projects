/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:04:31 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 16:07:12 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t len)
{
	if (s1 == NULL || s2 == NULL || len == 0)
		return (1);
	while (*s1 == *s2 && *s1 && *s2 && len)
	{
		s1++;
		s2++;
		len--;
	}
	if (*s1 != *s2 && len)
		return (0);
	else if (*s1 == *s2 && len)
		return (1);
	return (1);
}
