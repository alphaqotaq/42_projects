/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:57:23 by kmila             #+#    #+#             */
/*   Updated: 2019/09/06 11:18:35 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*res;
	int			flag;

	res = NULL;
	flag = 0;
	while (*s)
	{
		if (*s == c)
			res = s;
		s++;
	}
	if (*s == '\0' && c == '\0')
		return (char *)(s);
	return ((char *)res);
}
