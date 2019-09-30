/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmila <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 16:23:05 by kmila             #+#    #+#             */
/*   Updated: 2019/09/26 14:55:40 by kmila            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	size_t	i;
	size_t	j;

	if (s1 && s2)
	{
		len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
		if (!(res = (char *)malloc((len + 1) * sizeof(char))))
			return (NULL);
		if (len < ft_strlen(s1) || len < ft_strlen(s2))
			return (0);
		i = 0;
		while (s1[i])
		{
			res[i] = s1[i];
			i++;
		}
		j = 0;
		while (s2[j])
			res[i++] = s2[j++];
		res[i] = '\0';
		return (res);
	}
	return (0);
}
