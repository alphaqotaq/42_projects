/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:01:25 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 15:50:23 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	siz;
	char	*str;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	siz = ft_strlen((char *)s);
	if (!s || !(str = (char *)malloc(sizeof(char) * (siz + 1))))
		return (NULL);
	res = str;
	while (*s)
	{
		*str = f(*s);
		str++;
		s++;
	}
	*str = '\0';
	return (res);
}
