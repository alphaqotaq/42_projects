/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 13:09:33 by kmila             #+#    #+#             */
/*   Updated: 2019/09/11 16:06:48 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			siz;
	char			*str;
	char			*res;
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	siz = ft_strlen((char *)s);
	if (!(str = (char *)malloc(sizeof(char) * (siz + 1))))
		return (NULL);
	res = str;
	while (*s)
	{
		*str = f(i, *s);
		str++;
		s++;
		i++;
	}
	*str = '\0';
	return (res);
}
